cmake_minimum_required(VERSION 3.16)

project(H4_2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(H4_2 main.cpp
    address.h
    person.h
    address.cpp
    person.cpp)

include(GNUInstallDirs)
install(TARGETS H4_2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
