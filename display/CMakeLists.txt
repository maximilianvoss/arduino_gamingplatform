cmake_minimum_required(VERSION 2.8.4)
set(CMAKE_TOOLCHAIN_FILE ${CMAKE_SOURCE_DIR}/cmake/ArduinoToolchain.cmake)

set(SOURCE_FILES
        display.c
        display.h )

add_library(display ${SOURCE_FILES})