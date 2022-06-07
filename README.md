# Custom DOMLSParser

I'd like to create a custom DOMLSParser, so that I can overload the `DOMLSParserImpl::error` method.
I want to do this so I can access `this->getCurrentNode()` and pass that into the custom error handler
for further processing.

The current configuration (line 92 of `driver.cxx`) of the example will fail because the embedded binary
representation of the schema is not properly loaded, thus resulting in multiple error messages stating
`no declaration found for element '...'`.

Changing line 92 of `driver.cxx` to `true` allows for the binary representation the schema to load properly
and validate the xml file, but I can longer access `custom_dom_LS_parser_impl::error`.

## Solution

It was a simple solution of calling `DOMLSParserImpl` constructor from the initialization list instead of
the function body.

## Install

```bash
mkdir build; cd build
conan install .. --build=missing

cmake .. -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Debug
cmake --build .
```

## Usage

```bash
./build/bin/driver ./library.xml
```