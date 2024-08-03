#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 7
#define MODE "r"

char *read_color(char* filename) {
    char* color = NULL;
    FILE *f_ptr = fopen(filename, MODE);

    if(f_ptr != NULL) {
        char *buffer = malloc(BUFFER_SIZE * sizeof(char));
        fgets(buffer, BUFFER_SIZE, f_ptr);
        color = buffer;
    }

    fclose(f_ptr);
    return color;
}