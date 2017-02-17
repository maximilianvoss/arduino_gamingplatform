cmake_minimum_required(VERSION 2.8.4)
set(CMAKE_TOOLCHAIN_FILE ${CMAKE_SOURCE_DIR}/arduino-cmake/cmake/ArduinoToolchain.cmake)

add_subdirectory(libs/display)

set(PROJECT_NAME arduino_gamingplatform)
project(${PROJECT_NAME})

#set(CMAKE_VERBOSE_MAKEFILE on)

set(${CMAKE_PROJECT_NAME}_SRCS arduino_gamingplatform.cpp)
set(${CMAKE_PROJECT_NAME}_BOARD yun)
set(${CMAKE_PROJECT_NAME}_PORT /dev/cu.usbmodem1421)
set(${CMAKE_PROJECT_NAME}_PROGRAMMER avrispmkii)
set(${CMAKE_PROJECT_NAME}_LIBS display)
set(ARDLIBS Bridge)

generate_arduino_firmware(${CMAKE_PROJECT_NAME})
