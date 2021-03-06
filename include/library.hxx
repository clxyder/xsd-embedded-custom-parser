// Copyright (c) 2005-2014 Code Synthesis Tools CC
//
// This program was generated by CodeSynthesis XSD, an XML Schema to
// C++ data binding compiler.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
//
// In addition, as a special exception, Code Synthesis Tools CC gives
// permission to link this program with the Xerces-C++ library (or with
// modified versions of Xerces-C++ that use the same license as Xerces-C++),
// and distribute linked combinations including the two. You must obey
// the GNU General Public License version 2 in all respects for all of
// the code used other than Xerces-C++. If you modify this copy of the
// program, you may extend this exception to your version of the program,
// but you are not obligated to do so. If you do not wish to do so, delete
// this exception statement from your version.
//
// Furthermore, Code Synthesis Tools CC makes a special exception for
// the Free/Libre and Open Source Software (FLOSS) which is described
// in the accompanying FLOSSE file.
//

#ifndef CXX_MNT_C_USERS_CARLO_REPOS_SANDBOX_CPP_XSD_PARSING_LIBRARY_HXX
#define CXX_MNT_C_USERS_CARLO_REPOS_SANDBOX_CPP_XSD_PARSING_LIBRARY_HXX

#ifndef XSD_USE_CHAR
#define XSD_USE_CHAR
#endif

#ifndef XSD_CXX_TREE_USE_CHAR
#define XSD_CXX_TREE_USE_CHAR
#endif

// Begin prologue.
//
//
// End prologue.

#include <xsd/cxx/config.hxx>

#if (XSD_INT_VERSION != 4000000L)
#error XSD runtime version mismatch
#endif

#include <xsd/cxx/pre.hxx>

#include <xsd/cxx/xml/char-utf8.hxx>

#include <xsd/cxx/tree/exceptions.hxx>
#include <xsd/cxx/tree/elements.hxx>
#include <xsd/cxx/tree/types.hxx>

#include <xsd/cxx/xml/error-handler.hxx>

#include <xsd/cxx/xml/dom/auto-ptr.hxx>

#include <xsd/cxx/tree/parsing.hxx>
#include <xsd/cxx/tree/parsing/byte.hxx>
#include <xsd/cxx/tree/parsing/unsigned-byte.hxx>
#include <xsd/cxx/tree/parsing/short.hxx>
#include <xsd/cxx/tree/parsing/unsigned-short.hxx>
#include <xsd/cxx/tree/parsing/int.hxx>
#include <xsd/cxx/tree/parsing/unsigned-int.hxx>
#include <xsd/cxx/tree/parsing/long.hxx>
#include <xsd/cxx/tree/parsing/unsigned-long.hxx>
#include <xsd/cxx/tree/parsing/boolean.hxx>
#include <xsd/cxx/tree/parsing/float.hxx>
#include <xsd/cxx/tree/parsing/double.hxx>
#include <xsd/cxx/tree/parsing/decimal.hxx>

namespace xml_schema
{
  // anyType and anySimpleType.
  //
  typedef ::xsd::cxx::tree::type type;
  typedef ::xsd::cxx::tree::simple_type< char, type > simple_type;
  typedef ::xsd::cxx::tree::type container;

  // 8-bit
  //
  typedef signed char byte;
  typedef unsigned char unsigned_byte;

  // 16-bit
  //
  typedef short short_;
  typedef unsigned short unsigned_short;

  // 32-bit
  //
  typedef int int_;
  typedef unsigned int unsigned_int;

  // 64-bit
  //
  typedef long long long_;
  typedef unsigned long long unsigned_long;

  // Supposed to be arbitrary-length integral types.
  //
  typedef long long integer;
  typedef long long non_positive_integer;
  typedef unsigned long long non_negative_integer;
  typedef unsigned long long positive_integer;
  typedef long long negative_integer;

  // Boolean.
  //
  typedef bool boolean;

  // Floating-point types.
  //
  typedef float float_;
  typedef double double_;
  typedef double decimal;

  // String types.
  //
  typedef ::xsd::cxx::tree::string< char, simple_type > string;
  typedef ::xsd::cxx::tree::normalized_string< char, string > normalized_string;
  typedef ::xsd::cxx::tree::token< char, normalized_string > token;
  typedef ::xsd::cxx::tree::name< char, token > name;
  typedef ::xsd::cxx::tree::nmtoken< char, token > nmtoken;
  typedef ::xsd::cxx::tree::nmtokens< char, simple_type, nmtoken > nmtokens;
  typedef ::xsd::cxx::tree::ncname< char, name > ncname;
  typedef ::xsd::cxx::tree::language< char, token > language;

  // ID/IDREF.
  //
  typedef ::xsd::cxx::tree::id< char, ncname > id;
  typedef ::xsd::cxx::tree::idref< char, ncname, type > idref;
  typedef ::xsd::cxx::tree::idrefs< char, simple_type, idref > idrefs;

  // URI.
  //
  typedef ::xsd::cxx::tree::uri< char, simple_type > uri;

  // Qualified name.
  //
  typedef ::xsd::cxx::tree::qname< char, simple_type, uri, ncname > qname;

  // Binary.
  //
  typedef ::xsd::cxx::tree::buffer< char > buffer;
  typedef ::xsd::cxx::tree::base64_binary< char, simple_type > base64_binary;
  typedef ::xsd::cxx::tree::hex_binary< char, simple_type > hex_binary;

  // Date/time.
  //
  typedef ::xsd::cxx::tree::time_zone time_zone;
  typedef ::xsd::cxx::tree::date< char, simple_type > date;
  typedef ::xsd::cxx::tree::date_time< char, simple_type > date_time;
  typedef ::xsd::cxx::tree::duration< char, simple_type > duration;
  typedef ::xsd::cxx::tree::gday< char, simple_type > gday;
  typedef ::xsd::cxx::tree::gmonth< char, simple_type > gmonth;
  typedef ::xsd::cxx::tree::gmonth_day< char, simple_type > gmonth_day;
  typedef ::xsd::cxx::tree::gyear< char, simple_type > gyear;
  typedef ::xsd::cxx::tree::gyear_month< char, simple_type > gyear_month;
  typedef ::xsd::cxx::tree::time< char, simple_type > time;

  // Entity.
  //
  typedef ::xsd::cxx::tree::entity< char, ncname > entity;
  typedef ::xsd::cxx::tree::entities< char, simple_type, entity > entities;

  typedef ::xsd::cxx::tree::content_order content_order;
  // Flags and properties.
  //
  typedef ::xsd::cxx::tree::flags flags;
  typedef ::xsd::cxx::tree::properties< char > properties;

  // Parsing/serialization diagnostics.
  //
  typedef ::xsd::cxx::tree::severity severity;
  typedef ::xsd::cxx::tree::error< char > error;
  typedef ::xsd::cxx::tree::diagnostics< char > diagnostics;

  // Exceptions.
  //
  typedef ::xsd::cxx::tree::exception< char > exception;
  typedef ::xsd::cxx::tree::bounds< char > bounds;
  typedef ::xsd::cxx::tree::duplicate_id< char > duplicate_id;
  typedef ::xsd::cxx::tree::parsing< char > parsing;
  typedef ::xsd::cxx::tree::expected_element< char > expected_element;
  typedef ::xsd::cxx::tree::unexpected_element< char > unexpected_element;
  typedef ::xsd::cxx::tree::expected_attribute< char > expected_attribute;
  typedef ::xsd::cxx::tree::unexpected_enumerator< char > unexpected_enumerator;
  typedef ::xsd::cxx::tree::expected_text_content< char > expected_text_content;
  typedef ::xsd::cxx::tree::no_prefix_mapping< char > no_prefix_mapping;

  // Error handler callback interface.
  //
  typedef ::xsd::cxx::xml::error_handler< char > error_handler;

  // DOM interaction.
  //
  namespace dom
  {
    // Automatic pointer for DOMDocument.
    //
    using ::xsd::cxx::xml::dom::auto_ptr;

#ifndef XSD_CXX_TREE_TREE_NODE_KEY__XML_SCHEMA
#define XSD_CXX_TREE_TREE_NODE_KEY__XML_SCHEMA
    // DOM user data key for back pointers to tree nodes.
    //
    const XMLCh* const tree_node_key = ::xsd::cxx::tree::user_data_keys::node;
#endif
  }
}

// Forward declarations.
//
namespace library
{
  class isbn;
  class title;
  class genre;
  class person;
  class author;
  class book;
  class catalog;
}


#include <memory>    // ::std::auto_ptr
#include <limits>    // std::numeric_limits
#include <algorithm> // std::binary_search

#include <xsd/cxx/xml/char-utf8.hxx>

#include <xsd/cxx/tree/exceptions.hxx>
#include <xsd/cxx/tree/elements.hxx>
#include <xsd/cxx/tree/containers.hxx>
#include <xsd/cxx/tree/list.hxx>

#include <xsd/cxx/xml/dom/parsing-header.hxx>

namespace library
{
  class isbn: public ::xsd::cxx::tree::fundamental_base< ::xml_schema::unsigned_int, char, ::xml_schema::simple_type >
  {
    public:
    // Constructors.
    //
    isbn (const ::xml_schema::unsigned_int&);

    isbn (const ::xercesc::DOMElement& e,
          ::xml_schema::flags f = 0,
          ::xml_schema::container* c = 0);

    isbn (const ::xercesc::DOMAttr& a,
          ::xml_schema::flags f = 0,
          ::xml_schema::container* c = 0);

    isbn (const ::std::string& s,
          const ::xercesc::DOMElement* e,
          ::xml_schema::flags f = 0,
          ::xml_schema::container* c = 0);

    isbn (const isbn& x,
          ::xml_schema::flags f = 0,
          ::xml_schema::container* c = 0);

    virtual isbn*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    virtual 
    ~isbn ();
  };

  class title: public ::xml_schema::string
  {
    public:
    // lang
    //
    typedef ::xml_schema::language lang_type;
    typedef ::xsd::cxx::tree::optional< lang_type > lang_optional;
    typedef ::xsd::cxx::tree::traits< lang_type, char > lang_traits;

    const lang_optional&
    lang () const;

    lang_optional&
    lang ();

    void
    lang (const lang_type& x);

    void
    lang (const lang_optional& x);

    void
    lang (::std::auto_ptr< lang_type > p);

    // Constructors.
    //
    title ();

    title (const char*);

    title (const ::std::string&);

    title (const ::xml_schema::string&);

    title (const ::xercesc::DOMElement& e,
           ::xml_schema::flags f = 0,
           ::xml_schema::container* c = 0);

    title (const title& x,
           ::xml_schema::flags f = 0,
           ::xml_schema::container* c = 0);

    virtual title*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    title&
    operator= (const title& x);

    virtual 
    ~title ();

    // Implementation.
    //
    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::flags);

    protected:
    lang_optional lang_;
  };

  class genre: public ::xml_schema::string
  {
    public:
    enum value
    {
      romance,
      fiction,
      horror,
      history,
      philosophy
    };

    genre (value v);

    genre (const char* v);

    genre (const ::std::string& v);

    genre (const ::xml_schema::string& v);

    genre (const ::xercesc::DOMElement& e,
           ::xml_schema::flags f = 0,
           ::xml_schema::container* c = 0);

    genre (const ::xercesc::DOMAttr& a,
           ::xml_schema::flags f = 0,
           ::xml_schema::container* c = 0);

    genre (const ::std::string& s,
           const ::xercesc::DOMElement* e,
           ::xml_schema::flags f = 0,
           ::xml_schema::container* c = 0);

    genre (const genre& x,
           ::xml_schema::flags f = 0,
           ::xml_schema::container* c = 0);

    virtual genre*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    genre&
    operator= (value v);

    virtual
    operator value () const
    {
      return _xsd_genre_convert ();
    }

    protected:
    value
    _xsd_genre_convert () const;

    public:
    static const char* const _xsd_genre_literals_[5];
    static const value _xsd_genre_indexes_[5];
  };

  class person: public ::xml_schema::type
  {
    public:
    // name
    //
    typedef ::xml_schema::string name_type;
    typedef ::xsd::cxx::tree::traits< name_type, char > name_traits;

    const name_type&
    name () const;

    name_type&
    name ();

    void
    name (const name_type& x);

    void
    name (::std::auto_ptr< name_type > p);

    // born
    //
    typedef ::xml_schema::date born_type;
    typedef ::xsd::cxx::tree::traits< born_type, char > born_traits;

    const born_type&
    born () const;

    born_type&
    born ();

    void
    born (const born_type& x);

    void
    born (::std::auto_ptr< born_type > p);

    // died
    //
    typedef ::xml_schema::date died_type;
    typedef ::xsd::cxx::tree::optional< died_type > died_optional;
    typedef ::xsd::cxx::tree::traits< died_type, char > died_traits;

    const died_optional&
    died () const;

    died_optional&
    died ();

    void
    died (const died_type& x);

    void
    died (const died_optional& x);

    void
    died (::std::auto_ptr< died_type > p);

    // Constructors.
    //
    person (const name_type&,
            const born_type&);

    person (const ::xercesc::DOMElement& e,
            ::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0);

    person (const person& x,
            ::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0);

    virtual person*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    person&
    operator= (const person& x);

    virtual 
    ~person ();

    // Implementation.
    //
    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::flags);

    protected:
    ::xsd::cxx::tree::one< name_type > name_;
    ::xsd::cxx::tree::one< born_type > born_;
    died_optional died_;
  };

  class author: public ::library::person
  {
    public:
    // recommends
    //
    typedef ::xsd::cxx::tree::idref< char, ::xml_schema::ncname, ::library::book > recommends_type;
    typedef ::xsd::cxx::tree::optional< recommends_type > recommends_optional;
    typedef ::xsd::cxx::tree::traits< recommends_type, char > recommends_traits;

    const recommends_optional&
    recommends () const;

    recommends_optional&
    recommends ();

    void
    recommends (const recommends_type& x);

    void
    recommends (const recommends_optional& x);

    void
    recommends (::std::auto_ptr< recommends_type > p);

    // Constructors.
    //
    author (const name_type&,
            const born_type&);

    author (const ::xercesc::DOMElement& e,
            ::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0);

    author (const author& x,
            ::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0);

    virtual author*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    author&
    operator= (const author& x);

    virtual 
    ~author ();

    // Implementation.
    //
    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::flags);

    protected:
    recommends_optional recommends_;
  };

  class book: public ::xml_schema::type
  {
    public:
    // isbn
    //
    typedef ::library::isbn isbn_type;
    typedef ::xsd::cxx::tree::traits< isbn_type, char > isbn_traits;

    const isbn_type&
    isbn () const;

    isbn_type&
    isbn ();

    void
    isbn (const isbn_type& x);

    void
    isbn (::std::auto_ptr< isbn_type > p);

    // title
    //
    typedef ::library::title title_type;
    typedef ::xsd::cxx::tree::traits< title_type, char > title_traits;

    const title_type&
    title () const;

    title_type&
    title ();

    void
    title (const title_type& x);

    void
    title (::std::auto_ptr< title_type > p);

    // genre
    //
    typedef ::library::genre genre_type;
    typedef ::xsd::cxx::tree::traits< genre_type, char > genre_traits;

    const genre_type&
    genre () const;

    genre_type&
    genre ();

    void
    genre (const genre_type& x);

    void
    genre (::std::auto_ptr< genre_type > p);

    // author
    //
    typedef ::library::author author_type;
    typedef ::xsd::cxx::tree::sequence< author_type > author_sequence;
    typedef author_sequence::iterator author_iterator;
    typedef author_sequence::const_iterator author_const_iterator;
    typedef ::xsd::cxx::tree::traits< author_type, char > author_traits;

    const author_sequence&
    author () const;

    author_sequence&
    author ();

    void
    author (const author_sequence& s);

    // available
    //
    typedef ::xml_schema::boolean available_type;
    typedef ::xsd::cxx::tree::traits< available_type, char > available_traits;

    const available_type&
    available () const;

    available_type&
    available ();

    void
    available (const available_type& x);

    static available_type
    available_default_value ();

    // id
    //
    typedef ::xml_schema::id id_type;
    typedef ::xsd::cxx::tree::traits< id_type, char > id_traits;

    const id_type&
    id () const;

    id_type&
    id ();

    void
    id (const id_type& x);

    void
    id (::std::auto_ptr< id_type > p);

    // Constructors.
    //
    book (const isbn_type&,
          const title_type&,
          const genre_type&,
          const id_type&);

    book (const isbn_type&,
          ::std::auto_ptr< title_type >,
          const genre_type&,
          const id_type&);

    book (const ::xercesc::DOMElement& e,
          ::xml_schema::flags f = 0,
          ::xml_schema::container* c = 0);

    book (const book& x,
          ::xml_schema::flags f = 0,
          ::xml_schema::container* c = 0);

    virtual book*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    book&
    operator= (const book& x);

    virtual 
    ~book ();

    // Implementation.
    //
    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::flags);

    protected:
    ::xsd::cxx::tree::one< isbn_type > isbn_;
    ::xsd::cxx::tree::one< title_type > title_;
    ::xsd::cxx::tree::one< genre_type > genre_;
    author_sequence author_;
    ::xsd::cxx::tree::one< available_type > available_;
    ::xsd::cxx::tree::one< id_type > id_;
  };

  class catalog: public ::xml_schema::type
  {
    public:
    // book
    //
    typedef ::library::book book_type;
    typedef ::xsd::cxx::tree::sequence< book_type > book_sequence;
    typedef book_sequence::iterator book_iterator;
    typedef book_sequence::const_iterator book_const_iterator;
    typedef ::xsd::cxx::tree::traits< book_type, char > book_traits;

    const book_sequence&
    book () const;

    book_sequence&
    book ();

    void
    book (const book_sequence& s);

    // Constructors.
    //
    catalog ();

    catalog (const ::xercesc::DOMElement& e,
             ::xml_schema::flags f = 0,
             ::xml_schema::container* c = 0);

    catalog (const catalog& x,
             ::xml_schema::flags f = 0,
             ::xml_schema::container* c = 0);

    virtual catalog*
    _clone (::xml_schema::flags f = 0,
            ::xml_schema::container* c = 0) const;

    catalog&
    operator= (const catalog& x);

    virtual 
    ~catalog ();

    // Implementation.
    //
    protected:
    void
    parse (::xsd::cxx::xml::dom::parser< char >&,
           ::xml_schema::flags);

    protected:
    book_sequence book_;
  };
}

#include <iosfwd>

#include <xercesc/sax/InputSource.hpp>
#include <xercesc/dom/DOMDocument.hpp>
#include <xercesc/dom/DOMErrorHandler.hpp>

namespace library
{
  // Parse a URI or a local file.
  //

  ::std::auto_ptr< ::library::catalog >
  catalog_ (const ::std::string& uri,
            ::xml_schema::flags f = 0,
            const ::xml_schema::properties& p = ::xml_schema::properties ());

  ::std::auto_ptr< ::library::catalog >
  catalog_ (const ::std::string& uri,
            ::xml_schema::error_handler& eh,
            ::xml_schema::flags f = 0,
            const ::xml_schema::properties& p = ::xml_schema::properties ());

  ::std::auto_ptr< ::library::catalog >
  catalog_ (const ::std::string& uri,
            ::xercesc::DOMErrorHandler& eh,
            ::xml_schema::flags f = 0,
            const ::xml_schema::properties& p = ::xml_schema::properties ());

  // Parse std::istream.
  //

  ::std::auto_ptr< ::library::catalog >
  catalog_ (::std::istream& is,
            ::xml_schema::flags f = 0,
            const ::xml_schema::properties& p = ::xml_schema::properties ());

  ::std::auto_ptr< ::library::catalog >
  catalog_ (::std::istream& is,
            ::xml_schema::error_handler& eh,
            ::xml_schema::flags f = 0,
            const ::xml_schema::properties& p = ::xml_schema::properties ());

  ::std::auto_ptr< ::library::catalog >
  catalog_ (::std::istream& is,
            ::xercesc::DOMErrorHandler& eh,
            ::xml_schema::flags f = 0,
            const ::xml_schema::properties& p = ::xml_schema::properties ());

  ::std::auto_ptr< ::library::catalog >
  catalog_ (::std::istream& is,
            const ::std::string& id,
            ::xml_schema::flags f = 0,
            const ::xml_schema::properties& p = ::xml_schema::properties ());

  ::std::auto_ptr< ::library::catalog >
  catalog_ (::std::istream& is,
            const ::std::string& id,
            ::xml_schema::error_handler& eh,
            ::xml_schema::flags f = 0,
            const ::xml_schema::properties& p = ::xml_schema::properties ());

  ::std::auto_ptr< ::library::catalog >
  catalog_ (::std::istream& is,
            const ::std::string& id,
            ::xercesc::DOMErrorHandler& eh,
            ::xml_schema::flags f = 0,
            const ::xml_schema::properties& p = ::xml_schema::properties ());

  // Parse xercesc::InputSource.
  //

  ::std::auto_ptr< ::library::catalog >
  catalog_ (::xercesc::InputSource& is,
            ::xml_schema::flags f = 0,
            const ::xml_schema::properties& p = ::xml_schema::properties ());

  ::std::auto_ptr< ::library::catalog >
  catalog_ (::xercesc::InputSource& is,
            ::xml_schema::error_handler& eh,
            ::xml_schema::flags f = 0,
            const ::xml_schema::properties& p = ::xml_schema::properties ());

  ::std::auto_ptr< ::library::catalog >
  catalog_ (::xercesc::InputSource& is,
            ::xercesc::DOMErrorHandler& eh,
            ::xml_schema::flags f = 0,
            const ::xml_schema::properties& p = ::xml_schema::properties ());

  // Parse xercesc::DOMDocument.
  //

  ::std::auto_ptr< ::library::catalog >
  catalog_ (const ::xercesc::DOMDocument& d,
            ::xml_schema::flags f = 0,
            const ::xml_schema::properties& p = ::xml_schema::properties ());

  ::std::auto_ptr< ::library::catalog >
  catalog_ (::xml_schema::dom::auto_ptr< ::xercesc::DOMDocument > d,
            ::xml_schema::flags f = 0,
            const ::xml_schema::properties& p = ::xml_schema::properties ());
}

#include <xsd/cxx/post.hxx>

// Begin epilogue.
//
//
// End epilogue.

#endif // CXX_MNT_C_USERS_CARLO_REPOS_SANDBOX_CPP_XSD_PARSING_LIBRARY_HXX
