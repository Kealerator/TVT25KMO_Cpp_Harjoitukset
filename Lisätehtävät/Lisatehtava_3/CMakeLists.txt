cmake_minimum_required(VERSION 3.16)

project(Lisatehtava_3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Lisatehtava_3 main.cpp
    car.cpp
    car.h)

include(GNUInstallDirs)
install(TARGETS Lisatehtava_3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
