#include "isogram.h"

#include <stdbool.h>

bool is_isogram(const char* phrase) {
        const char* char_ptr  = (const char*)phrase;
        char*       traversed = "\0";
        while (*char_ptr) {
                if (*char_ptr == *traversed) {
                        return false;
                } else {
                        traversed = char_ptr;
                }

                (c++);
        }
        return true;
}
