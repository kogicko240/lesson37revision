#include "logic.h"

bool is_digits_count_even(long long number) {
    if (number < 0) {
        number = -number;
    }

    int digitCount = 0;

    if (number == 0) {
        digitCount = 1;
    }
    else {
        while (number > 0) {
            digitCount++;
            number /= 10;
        }
    }

    return (digitCount % 2 == 0);
}