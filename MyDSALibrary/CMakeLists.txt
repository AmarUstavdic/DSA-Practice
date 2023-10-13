cmake_minimum_required(VERSION 3.0.0)

project(MyDSALibrary)

set(SOURCE_FILES
    UnorderedList/UnorderedList.cpp 
    OrderedList/OrderedList.cpp
    BinarySearchTree/BinarySearchTree.cpp
)

add_library(MyDSALibrary STATIC ${SOURCE_FILES})
