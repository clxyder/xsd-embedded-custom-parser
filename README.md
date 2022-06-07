# Custom DOMLSParser

I'd like to create a custom DOMLSParser, so that I can overload the `DOMLSParserImpl::error` method.

## Install

```bash
mkdir build; cd build
conan install .. --build=missing

cmake .. -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Debug
cmake --build .
```
