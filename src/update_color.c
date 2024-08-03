#include <stdio.h>

#define MODE "w+"

__attribute__((unused)) void update_color(char* filename, char* new_color_hex) {
    FILE *f_ptr = fopen(filename, MODE);
    if (f_ptr != NULL) {
        fseek(f_ptr, 0, SEEK_SET);
        fputs(new_color_hex, f_ptr);
    }

    fclose(f_ptr);
}