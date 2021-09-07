#include "armstrong_numbers.h"

#include <math.h>
#include <stdlib.h>

static int count_digits(int number) {
        if (number == 0) {
                return 1;
        } else {
                return log10(abs(number)) + 1;
        }
}

bool is_armstrong_number(int candidate) {
        double ndigits = count_digits(candidate);
        double sum = 0;
        for (int n = candidate; n != 0; n /= 10) {
                double digit = n % 10;
                sum += pow(digit, ndigits);
        }
        return sum == candidate;
}
