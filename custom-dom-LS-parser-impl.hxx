#pragma once

#include <xercesc/parsers/DOMLSParserImpl.hpp>

using namespace xercesc;

class custom_dom_LS_parser_impl: public DOMLSParserImpl
{
public:
custom_dom_LS_parser_impl(XMLValidator* const valToAdopt = 0,
                          MemoryManager* const manager = XMLPlatformUtils::fgMemoryManager,
                          XMLGrammarPool* const gramPool = 0);

void error(
        const unsigned int errCode,
        const XMLCh* const msgDomain,
        const XMLErrorReporter::ErrTypes errType,
        const XMLCh* const errorText,
        const XMLCh* const systemId,
        const XMLCh* const publicId,
        const XMLFileLoc lineNum,
        const XMLFileLoc colNum
    );
};
