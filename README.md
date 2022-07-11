# Custom DOMLSParser

I'd like to create a custom `DOMLSParser`, so that I can overload the `DOMLSParserImpl::error` method.
I want to do this so I can access `this->getCurrentNode()` and pass that into the custom error handler
for further processing.

## Solution

It was a simple solution of calling `DOMLSParserImpl` constructor from the initialization list instead of
the function body.

## Install

Install git submodules, with the following command

```
git submodule update --init --recursive
```

To enable 32-bit build, install the following

```
sudo apt install gcc-multilib g++-multilib
```

For normal usage with Linux, the following packages are needed

```
sudo apt install gcc-arm-linux-gnueabi g++-arm-linux-gnueabi binutils-arm-linux-gnueabi gdb-multiarch openocd
```

^Note: The above packages conflict with each other, there is a reported [bug](https://bugs.launchpad.net/ubuntu/+source/gcc-defaults/+bug/1300211) on this.

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