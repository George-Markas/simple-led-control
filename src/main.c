#include <stdio.h>
#include <stdlib.h>
#include "../include/hex_to_rgb.h"
#include "../include/brightness_control.h"
#include "../include/mystrcat.h"
#include "../include/read_color.h"
#include "../include/update_color.h"

#define FILENAME "color.dat"

int main(void) {

    char *color_hex = read_color(FILENAME);
    if(color_hex == NULL)
        exit(EXIT_FAILURE);

    unsigned char* rgb_vals = hex_to_rgb(color_hex);
    free(color_hex);

    /* brightness adjustment here */
    brightness_down(rgb_vals);

    /* convert the new values back to hex and concatenate into a single string */
    char* new_color_hex = calloc(7, sizeof(char));
    for(int i = 0; i < 3; i++) {
        char temp[3];
        sprintf(temp, "%02x", rgb_vals[i]);
        mystrcat(new_color_hex, temp);
    }

    char liquidctlcmd[37] = "liquidctl set led color fixed ";
    mystrcat(liquidctlcmd, new_color_hex);
    update_color(FILENAME, new_color_hex);
    system(liquidctlcmd);

    free(rgb_vals);
    free(new_color_hex);
    return(EXIT_SUCCESS);
}
