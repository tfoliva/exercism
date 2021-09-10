#include "isogram.h"

bool repeated_char(const char* letters, const char x) {
        int  rep_count = 0;
        char c;

        while ((c = *letters++))
                if (x == c) rep_count++;

        return rep_count;
}

bool is_isogram(const char* phrase) {
        if (!phrase) return false;  // if pointer is NULL or 0

        char p           = 0;
        char letters[26] = {0};  // at max, phrase could contain the whole
                                 // alphabet without repetition

        for (int i = 0; (p = *phrase++); ++i) {
                if (p < 'A') {
                        letters[i] = -1;
                        continue;
                }

                // guarantee that all letters are lowercase
                if (p >= 'A' && p <= 'Z')  // if uppercase
                        p += 32;           // convert to lowercase

                if (repeated_char(letters, p))
                        return false;
                else
                        letters[i] = p;
        }

        return true;
}
