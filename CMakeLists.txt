cmake_minimum_required(VERSION 3.25)
project(led_control VERSION 1.0)

set(CMAKE_C_STANDARD 99)

set(SOURCES
    src/main.c
    src/brightness_control.c
    src/hex_to_rgb.c
    src/mystrcat.c
    src/read_color.c
    src/update_color.c
)

set(HEADERS
    include/brightness_control.h
    include/hex_to_rgb.h
    include/mystrcat.h
    include/read_color.h
    include/update_color.h
)

include_directories(include)
add_executable(led_control ${SOURCES} ${HEADERS})