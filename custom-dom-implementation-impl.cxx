#include <xercesc/parsers/DOMLSParserImpl.hpp>

#include "custom-dom-LS-parser-impl.hxx"

#include "custom-dom-implementation-impl.hxx"

DOMLSParser* custom_dom_implementation_impl::createLSParser(
    const DOMImplementationLSMode mode,
    const XMLCh* const schemaType,
    MemoryManager* const manager,
    XMLGrammarPool* const gramPool
)
{
    return new (manager) custom_dom_LS_parser_impl(0, manager, gramPool);
}

custom_dom_LS_parser_impl* custom_dom_implementation_impl::createCustomLSParser(
    const DOMImplementationLSMode mode,
    const XMLCh* const schemaType,
    MemoryManager* const manager,
    XMLGrammarPool* const gramPool
)
{
    return new (manager) custom_dom_LS_parser_impl(0, manager, gramPool);
}