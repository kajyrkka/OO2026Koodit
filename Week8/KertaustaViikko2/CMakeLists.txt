cmake_minimum_required(VERSION 3.16)

project(KertaustaViikko2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(KertaustaViikko2 main.cpp
    kirja.h kirja.cpp)

include(GNUInstallDirs)
install(TARGETS KertaustaViikko2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
