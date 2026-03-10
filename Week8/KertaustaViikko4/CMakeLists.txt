cmake_minimum_required(VERSION 3.16)

project(KertaustaViikko4 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(KertaustaViikko4 main.cpp
    auto.h auto.cpp
    moottori.h moottori.cpp)

include(GNUInstallDirs)
install(TARGETS KertaustaViikko4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
