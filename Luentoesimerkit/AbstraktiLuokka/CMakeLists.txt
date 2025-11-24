cmake_minimum_required(VERSION 3.16)

project(AbstraktiLuokka LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(AbstraktiLuokka main.cpp
    animal.h animal.cpp
    cat.h cat.cpp
    ianimal.h ianimal.cpp
    dog.h dog.cpp)

include(GNUInstallDirs)
install(TARGETS AbstraktiLuokka
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
