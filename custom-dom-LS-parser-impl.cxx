#include <iostream>

#include "custom-dom-LS-parser-impl.hxx"

custom_dom_LS_parser_impl::custom_dom_LS_parser_impl(XMLValidator* const valToAdopt,
                         MemoryManager* const manager,
                         XMLGrammarPool* const gramPool)
{
    DOMLSParserImpl(valToAdopt, manager, gramPool);
}

void custom_dom_LS_parser_impl::error(
            const unsigned int errCode,
            const XMLCh* const msgDomain,
            const XMLErrorReporter::ErrTypes errType,
            const XMLCh* const errorText,
            const XMLCh* const systemId,
            const XMLCh* const publicId,
            const XMLFileLoc lineNum,
            const XMLFileLoc colNum
        )
{
    std::cerr << "errorText" << XMLString::transcode(errorText) << std::endl;

    // pass this->getCurrentNode() into error handler for custom processing

    DOMLSParserImpl::error(errCode, msgDomain, errType, errorText, systemId, publicId, lineNum, colNum);
}
