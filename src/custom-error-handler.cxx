#include <iostream>

#include <xercesc/util/XMLString.hpp>

#include "custom-error-handler.hxx"

using namespace xercesc;

bool custom_error_handler::handleError(const DOMError& domError)
{
    if (domError.getSeverity() == DOMError::DOM_SEVERITY_WARNING)
        std::cerr << "\nWarning Message: ";
    else if (domError.getSeverity() == DOMError::DOM_SEVERITY_ERROR)
        std::cerr << "\nErorr Message: ";
    else
        std::cerr << "\nFatal Message: ";

    std::cerr << XMLString::transcode(domError.getMessage()) << std::endl;

    return true;
}
