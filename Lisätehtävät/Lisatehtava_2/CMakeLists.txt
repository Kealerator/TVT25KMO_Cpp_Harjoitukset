cmake_minimum_required(VERSION 3.16)

project(Lisatehtava_2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Lisatehtava_2
    car.cpp
    car.h
    main.cpp)

include(GNUInstallDirs)
install(TARGETS Lisatehtava_2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
