#include "grains.h"

uint64_t square(uint8_t index) {
        if (0 < index && index < 65)
                // use left-shift operator to implement 2^n, n = index - 1
                return 1ULL << --index;  // 2^(n-1)
        else
                return 0;
}

// Geometric progression cumulative sum for when r = 2
uint64_t total(void) {
        return (uint64_t)-1;  // S_64 = 2^64 - 1, note that uint64_t is 2^64
}
