#pragma once

#include <xercesc/dom/DOMLSParser.hpp>
#include <xercesc/dom/impl/DOMImplementationImpl.hpp>

#include "custom-dom-LS-parser-impl.hxx"

class custom_dom_implementation_impl: public DOMImplementationImpl
{
public:
DOMLSParser* createLSParser(
    const DOMImplementationLSMode mode,
    const XMLCh* const schemaType,
    MemoryManager* const manager = XMLPlatformUtils::fgMemoryManager,
    XMLGrammarPool* const gramPool = 0
);

custom_dom_LS_parser_impl* createCustomLSParser(
    const DOMImplementationLSMode mode,
    const XMLCh* const schemaType,
    MemoryManager* const manager = XMLPlatformUtils::fgMemoryManager,
    XMLGrammarPool* const gramPool = 0
);

};
