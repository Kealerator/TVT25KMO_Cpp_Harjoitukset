cmake_minimum_required(VERSION 3.16)

project(H2b4 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(H2b4 main.cpp
    tuote.cpp
    tuote.h)

include(GNUInstallDirs)
install(TARGETS H2b4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
