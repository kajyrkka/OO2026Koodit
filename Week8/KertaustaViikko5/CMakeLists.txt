cmake_minimum_required(VERSION 3.16)

project(KertaustaViikko5 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(KertaustaViikko5 main.cpp
    solmu.h solmu.cpp
    lista.h lista.cpp)

include(GNUInstallDirs)
install(TARGETS KertaustaViikko5
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
