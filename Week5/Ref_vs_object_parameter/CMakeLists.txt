cmake_minimum_required(VERSION 3.16)

project(Ref_vs_object_parameter LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Ref_vs_object_parameter main.cpp
    myclass.h myclass.cpp)

include(GNUInstallDirs)
install(TARGETS Ref_vs_object_parameter
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
