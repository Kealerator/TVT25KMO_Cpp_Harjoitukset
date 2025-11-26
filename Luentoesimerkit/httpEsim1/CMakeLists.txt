cmake_minimum_required(VERSION 3.16)

project(httpEsim1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core Network)

add_executable(httpEsim1
  main.cpp
  httpperson.h httpperson.cpp
  environment.h environment.cpp
)
target_link_libraries(httpEsim1
        PRIVATE
      Qt::Core
    Qt::Network
)
target_link_libraries(httpEsim1 PRIVATE Qt${QT_VERSION_MAJOR}::Core)
target_link_libraries(httpEsim1 PRIVATE Qt${QT_VERSION_MAJOR}::Core)

include(GNUInstallDirs)
install(TARGETS httpEsim1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
