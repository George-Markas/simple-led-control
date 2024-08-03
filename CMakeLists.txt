cmake_minimum_required(VERSION 3.25)
project(led_control VERSION 1.0)

set(CMAKE_C_STANDARD 99)

set(SOURCES
    src/main.c
    src/brightness_control.c
    src/color_hex_parser.c
    src/mystrcat.c
    src/read_color.c
    src/update_color.c
)

set(HEADERS
    include/brightness_control.h
    include/color_hex_parser.h
    include/mystrcat.h
    include/read_color.h
    include/update_color.h
)

include_directories(include)
#configure_file(${CMAKE_SOURCE_DIR}/color.txt ${CMAKE_BINARY_DIR} COPYONLY)
add_executable(led_control ${SOURCES} ${HEADERS})