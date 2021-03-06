// file      : examples/cxx/tree/embedded/driver.cxx
// copyright : not copyrighted - public domain

#include <memory>   // std::auto_ptr
#include <fstream>
#include <iostream>

#include <xercesc/dom/DOM.hpp>
#include <xercesc/util/XMLUniDefs.hpp> // chLatin_*
#include <xercesc/util/PlatformUtils.hpp>
#include <xercesc/validators/common/Grammar.hpp> // xercesc::Grammar
#include <xercesc/framework/Wrapper4InputSource.hpp>

#include <xercesc/framework/XMLGrammarPoolImpl.hpp>

#include <xsd/cxx/xml/string.hxx>
#include <xsd/cxx/xml/dom/auto-ptr.hxx>
#include <xsd/cxx/xml/sax/std-input-source.hxx>

#include "include/library.hxx"
#include "include/library-schema.hxx"
#include "include/grammar-input-stream.hxx"

#include "include/custom-error-handler.hxx"
#include "include/custom-dom-LS-parser-impl.hxx"

using namespace std;

int
main (int argc, char* argv[])
{
  if (argc != 2)
  {
    cerr << "usage: " << argv[0] << " library.xml" << endl;
    return 1;
  }

  int r (0);

  // We need to initialize the Xerces-C++ runtime because we
  // are doing the XML-to-DOM parsing ourselves.
  //
  xercesc::XMLPlatformUtils::Initialize ();

  try
  {
    using namespace xercesc;
    namespace xml = xsd::cxx::xml;
    namespace tree = xsd::cxx::tree;

    // Create and load the grammar pool.
    //
    MemoryManager* mm (XMLPlatformUtils::fgMemoryManager);

    auto_ptr<XMLGrammarPool> gp (new XMLGrammarPoolImpl (mm));

    size_t library_schema_size = sizeof (library_schema);
    std::cout << "sizeof (library_schema): " << library_schema_size << "\n";

    try
    {
      grammar_input_stream is (library_schema, sizeof (library_schema));
      gp->deserializeGrammars(&is);
    }
    catch(const XSerializationException& e)
    {
      cerr << "unable to load schema: " <<
        xml::transcode<char> (e.getMessage ()) << endl;
      return 1;
    }

    // Lock the grammar pool. This is necessary if we plan to use the
    // same grammar pool in multiple threads (this way we can reuse the
    // same grammar in multiple parsers). Locking the pool disallows any
    // modifications to the pool, such as an attempt by one of the threads
    // to cache additional schemas.
    //
    gp->lockPool ();

    // Get an implementation of a Load-Store (LS) parser.
    //
    xml::dom::auto_ptr<custom_dom_LS_parser_impl> parser(new (mm) custom_dom_LS_parser_impl(0, mm, gp.get ()));

    DOMConfiguration* conf (parser->getDomConfig ());

    // Discard comment nodes in the document.
    //
    conf->setParameter (XMLUni::fgDOMComments, false);

    // Enable datatype normalization.
    //
    conf->setParameter (XMLUni::fgDOMDatatypeNormalization, true);

    // Do not create EntityReference nodes in the DOM tree. No
    // EntityReference nodes will be created, only the nodes
    // corresponding to their fully expanded substitution text
    // will be created.
    //
    conf->setParameter (XMLUni::fgDOMEntities, false);

    // Perform namespace processing.
    //
    conf->setParameter (XMLUni::fgDOMNamespaces, true);

    // Do not include ignorable whitespace in the DOM tree.
    //
    conf->setParameter (XMLUni::fgDOMElementContentWhitespace, false);

    // Enable validation.
    //
    conf->setParameter (XMLUni::fgDOMValidate, true);
    conf->setParameter (XMLUni::fgXercesSchema, true);
    conf->setParameter (XMLUni::fgXercesSchemaFullChecking, false);

    // Xerces-C++ 3.1.0 is the first version with working multi import
    // support.
    //
#if _XERCES_VERSION >= 30100
    conf->setParameter (XMLUni::fgXercesHandleMultipleImports, true);
#endif

    // Use the loaded grammar during parsing.
    //
    conf->setParameter (XMLUni::fgXercesUseCachedGrammarInParse, true);

    // Disable loading schemas via other means (e.g., schemaLocation).
    //
    conf->setParameter (XMLUni::fgXercesLoadSchema, false);

    // We will release the DOM document ourselves.
    //
    conf->setParameter (XMLUni::fgXercesUserAdoptsDOMDocument, true);

    // Set error handler.
    //
    custom_error_handler eh;
    conf->setParameter (XMLUni::fgDOMErrorHandler, &eh);

    // Parse XML documents.
    //
    const unsigned int NUM_LOOPS = 1;
    for (unsigned long i (0); i < NUM_LOOPS; ++i)
    {
      ifstream ifs;
      ifs.exceptions (ifstream::badbit | ifstream::failbit);
      ifs.open (argv[1]);

      // Wrap the standard input stream.
      //
      xml::sax::std_input_source isrc (ifs, argv[1]);
      Wrapper4InputSource wrap (&isrc, false);

      // Parse XML to DOM.
      //
      xml_schema::dom::auto_ptr<DOMDocument> doc (parser->parse (&wrap));

      // Parse DOM to the object model.
      //
      auto_ptr<library::catalog> c (library::catalog_ (*doc));

      cerr << "catalog with " << c->book ().size () << " books" << endl;
    }
  }
  catch (const xml_schema::exception& e)
  {
    cerr << e << endl;
    r = 1;
  }
  catch (const std::ios_base::failure&)
  {
    cerr << argv[1] << ": unable to open or read failure" << endl;
    r = 1;
  }

  xercesc::XMLPlatformUtils::Terminate ();
  return r;
}
