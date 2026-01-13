cmake_minimum_required(VERSION 3.16)

project(RandomGen LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(RandomGen main.cpp
    random.h random.cpp
    dht.h dht.cpp
    lcd.h lcd.cpp)

include(GNUInstallDirs)
install(TARGETS RandomGen
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
