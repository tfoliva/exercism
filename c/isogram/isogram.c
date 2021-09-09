#include "isogram.h"

bool repeated_char(const char* letters, const char x) {
        int rep_count = 0;
        while (*letters) {
                if (x == *letters) {
                        rep_count++;
                }
                letters++;
        }

        return rep_count;
}

bool is_isogram(const char* phrase) {
        if (!phrase) return false;  // if pointer is NULL or 0

        char letters[26] = {0};  // at max, phrase could contain the whole
                                 // alphabet without repetition

        char p = 0;
        for (int i = 0; *phrase; ++i) {
                p = *phrase;

                if (p < 65) {
                        ++phrase;  // ignore hyphens
                        letters[i] = -1;
                        continue;
                }

                // guarantee that all letters are lowercase
                if (p >= 65 && p <= 90) {  // if uppercase
                        p = *phrase + 32;  // convert to lowercase
                }

                if (repeated_char(letters, p)) {
                        return false;
                } else {
                        letters[i] = p;
                }
                ++phrase;
        }

        return true;
}
