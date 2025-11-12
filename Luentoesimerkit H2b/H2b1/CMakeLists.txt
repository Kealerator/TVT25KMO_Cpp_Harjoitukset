cmake_minimum_required(VERSION 3.16)

project(H2b1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(H2b1 main.cpp
    tuote.h tuote.cpp)

include(GNUInstallDirs)
install(TARGETS H2b1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
