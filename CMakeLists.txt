cmake_minimum_required(VERSION 3.27.5)
set(
    CMAKE_CXX_STANDARD 20
    CMAKE_RUNTIME_OUTPUT_DIRECTOR/bin
)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH  ${CMAKE_BINARY_DIR}/lib)
#add_library(MTK SHARED lib/mtklib/OperasiMtkImpl.cxx)
add_library(MTK STATIC lib/mtklib/OperasiMtkImpl.cxx)

project(meth-lib)
set(
    SOURCES src/main_ori.cpp
            lib/mtklib/OperasiMtk.h
            lib/mtklib/OperasiMtkImpl.cxx
)

add_executable(main ${SOURCES})

