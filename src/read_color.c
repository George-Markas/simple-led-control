#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE (sizeof(char) * 7) // 6 + 1 null terminator from fgets
#define MODE "r"

__attribute__((unused)) char *read_color(const char *filename) {
    FILE *f_ptr = fopen(filename, MODE);
    if(f_ptr == NULL) {
        fprintf(stderr, "Error: could not open \"%s\"", filename);
        return NULL;
    }

    char *buffer = (char*) malloc(BUFFER_SIZE);
    fgets(buffer, 7, f_ptr);
    fclose(f_ptr);
    return buffer;
}