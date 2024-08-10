#include <stdlib.h>
#include <stdio.h>

unsigned char* hex_to_rgb(const char color_hex[static 6]) {
    unsigned char *rgb_vals = malloc(3 * sizeof(unsigned char));
    if(rgb_vals == NULL) {
        fprintf(stderr, "Error: allocation failure");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < 6; i = i + 2) {
        char temp[3];
        temp[0] = color_hex[i];
        temp[1] = color_hex[i + 1];
        rgb_vals[i / 2] = (unsigned char) strtol(temp, NULL, 16);
    }

    return(rgb_vals);
}