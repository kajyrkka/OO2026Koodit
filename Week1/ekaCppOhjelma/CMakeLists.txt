cmake_minimum_required(VERSION 3.16)

project(ekaCppOhjelma LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ekaCppOhjelma main.cpp)

include(GNUInstallDirs)
install(TARGETS ekaCppOhjelma
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
