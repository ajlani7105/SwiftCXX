cmake_minimum_required(VERSION 3.31)

set(CMAKE_CXX_STANDARD 20)

set (Swiftc  "C:\\Swift\\bin\\swiftc.exe") #link to swiftc compiler full path

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/lib")

project(WrapCXX CXX C)

add_library(Operation SHARED Operation.h Operation.cpp)
set_target_properties(Operation PROPERTIES OUTPUT_NAME "Operation"
        RUNTIME_OUTPUT_DIRECTORY  "${CMAKE_CURRENT_SOURCE_DIR}/lib")

add_library(Connector SHARED CXX_Connector.cpp)
target_link_libraries(Connector Operation)
set_target_properties(Connector PROPERTIES OUTPUT_NAME "Connector"
        RUNTIME_OUTPUT_DIRECTORY  "${CMAKE_CURRENT_SOURCE_DIR}/lib")

add_executable(WrapCXX  main.c) #test cxx from c app
target_link_libraries(WrapCXX Connector)
set_target_properties(WrapCXX PROPERTIES OUTPUT_NAME "TestFromC"
        RUNTIME_OUTPUT_DIRECTORY  "${CMAKE_CURRENT_SOURCE_DIR}/lib")

set(SwiftApp app.swift) #you can add more swift files to compile
execute_process(COMMAND ${Swiftc}  -I module ${SwiftApp} -Xlinker -L${CMAKE_CURRENT_SOURCE_DIR}/lib
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})



