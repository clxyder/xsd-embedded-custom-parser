#pragma once

#include <xercesc/dom/DOMError.hpp>
#include <xercesc/dom/DOMErrorHandler.hpp>

using namespace xercesc;

class custom_error_handler: public DOMErrorHandler
{
public:
bool handleError(const DOMError& domError);
};
