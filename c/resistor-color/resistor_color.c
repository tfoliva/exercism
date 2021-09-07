#include "resistor_color.h"

#define N_COLORS (WHITE + 1)

unsigned color_code(resistor_band_t band) { return band; }

const resistor_band_t* colors() {
        static resistor_band_t codes[N_COLORS];

        for (int i = 0; i < N_COLORS; i++) {
                codes[i] = i;
        }

        return codes;
}
