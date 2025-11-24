cmake_minimum_required(VERSION 3.16)

project(Interface LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Interface main.cpp
    imyinterface.h imyinterface.cpp
    testclass.h testclass.cpp)

include(GNUInstallDirs)
install(TARGETS Interface
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
