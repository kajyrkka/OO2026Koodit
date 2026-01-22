cmake_minimum_required(VERSION 3.16)

project(MuutamiaEsimerkkeja LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(MuutamiaEsimerkkeja main.cpp
    baseclass.h baseclass.cpp
    derivedclass.h derivedclass.cpp)

include(GNUInstallDirs)
install(TARGETS MuutamiaEsimerkkeja
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
