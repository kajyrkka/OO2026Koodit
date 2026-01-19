cmake_minimum_required(VERSION 3.16)

project(ThisPointteriEsimerkki LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ThisPointteriEsimerkki main.cpp
    testi.h testi.cpp)

include(GNUInstallDirs)
install(TARGETS ThisPointteriEsimerkki
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
