cmake_minimum_required(VERSION 3.14)

# HACK: For cross-compilation to work
set(CMAKE_TRY_COMPILE_TARGET_TYPE "STATIC_LIBRARY")

project(xsd_embedded)

if (EXISTS ${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
    set(CONAN_SYSTEM_INCLUDES ON)
    conan_basic_setup()
else()
    message(WARNING "conanfileinfo.cmake not found, please run `conan install`.")
endif()

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# 
#  xsdbin
# 

add_executable(xsdbin xsdbin.cxx)
target_include_directories(xsdbin PUBLIC .)
target_link_libraries(xsdbin ${CONAN_LIBS})

# 
#  Make xsdbin if not already built
# 

if (NOT EXISTS ${CMAKE_BINARY_DIR}/bin/xsdbin)
    execute_process(COMMAND echo ${CMAKE_BINARY_DIR}/bin/xsdbin)
endif()

# 
#  Generate XSD binary representation
# 

if (EXISTS ${CMAKE_BINARY_DIR}/bin/xsdbin)
    execute_process(COMMAND ${CMAKE_BINARY_DIR}/bin/xsdbin --output-dir ${CMAKE_SOURCE_DIR}/include ${CMAKE_SOURCE_DIR}/library.xsd)
    execute_process(COMMAND mv ${CMAKE_SOURCE_DIR}/include/library-schema.cxx ${CMAKE_SOURCE_DIR}/src)
endif()

# 
#  Generate parser classes
# 

if (DEFINED CONAN_XSD_ROOT)
    execute_process(COMMAND ${CONAN_XSD_ROOT}/bin/xsd cxx-tree --output-dir ${CMAKE_SOURCE_DIR}/include --include-prefix include/ ${CMAKE_SOURCE_DIR}/library.xsd)
    execute_process(COMMAND mv ${CMAKE_SOURCE_DIR}/include/library.cxx ${CMAKE_SOURCE_DIR}/src)
endif()

# 
#  driver
# 

add_executable(driver driver.cxx)
add_library(driver_lib STATIC
    include/grammar-input-stream.hxx
    include/library-schema.hxx
    include/library.hxx
    include/custom-error-handler.hxx
    include/custom-dom-LS-parser-impl.hxx
    src/grammar-input-stream.cxx
    src/library-schema.cxx
    src/library.cxx
    src/custom-error-handler.cxx
    src/custom-dom-LS-parser-impl.cxx
)

target_include_directories(driver_lib PUBLIC "./")
target_link_libraries(driver_lib ${CONAN_LIBS})
target_link_libraries(driver driver_lib ${CONAN_LIBS})

install(TARGETS driver driver_lib)
install(DIRECTORY "./" DESTINATION .)