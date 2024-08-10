#include <stdio.h>

#define BRIGHTNESS_MAX 255
#define BRIGHTNESS_MIN 0

__attribute__((unused)) void brightness_up(unsigned char* rgb_vals) {
    for (int i = 0; i < 3; i++) {
        if(rgb_vals[i] < BRIGHTNESS_MAX) {
            rgb_vals[i] += 15;
        } else {
            fprintf(stderr, "Debug: brightness max");
        }
    }
}

__attribute__((unused)) void brightness_down(unsigned char *rgb_vals) {
    for (int i = 0; i < 3; i++) {
        if(rgb_vals[i] > BRIGHTNESS_MIN) {
            rgb_vals[i] -= 15;
        } else {
            fprintf(stderr, "Debug: brightness min");
        }
    }
}
