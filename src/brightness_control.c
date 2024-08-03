#define BRIGHTNESS_MAX 255
#define BRIGHTNESS_MIN 0

__attribute__((unused)) void brightness_up(unsigned char* rgb_vals) {
    for (int i = 0; i < 3; i++) {
        if((rgb_vals[i] + 15) <= 255) {
            rgb_vals[i] += 15;
        } else {
            rgb_vals[i] = BRIGHTNESS_MAX; // if it exceeds max value, set value to max
        }
    }
}

__attribute__((unused)) void brightness_down(unsigned char *rgb_vals) {
    for (int i = 0; i < 3; i++) {
        if((rgb_vals[i] - 15) >= 0) {
            rgb_vals[i] -= 15;
        } else {
            rgb_vals[i] = BRIGHTNESS_MIN; // if negative, set value to min
        }
    }
}
