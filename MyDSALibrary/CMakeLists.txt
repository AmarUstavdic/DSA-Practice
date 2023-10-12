cmake_minimum_required(VERSION 3.0.0)

project(MyDSALibrary)

set(SOURCE_FILES
    UnorderedList.cpp 
    
)

add_library(MyDSALibrary STATIC ${SOURCE_FILES})
