/* Category: Loops without Arrays/Strings */
/* Question 33: Determine whether a non-negative integer is an Armstrong number. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>
#include "../Day 1/io.h"

int main(void) {
    unsigned long long number, remainder, total = 0ULL, value;
    unsigned int digits = 0U;
    if (scanf("%llu", &number) != 1) { fprintf(stderr, "Expected a non-negative integer.\n"); return 1; }
    value = number;
    do { ++digits; value /= 10ULL; } while (value != 0ULL);
    value = number;
    do {
        unsigned long long power = 1ULL;
        unsigned int exponent;
        remainder = value % 10ULL;
        for (exponent = 0U; exponent < digits; ++exponent) {
            if (remainder != 0ULL && power > ULLONG_MAX / remainder) { puts("Not an Armstrong number"); return 0; }
            power *= remainder;
        }
        if (total > ULLONG_MAX - power) { puts("Not an Armstrong number"); return 0; }
        total += power;
        value /= 10ULL;
    } while (value != 0ULL);
    puts(total == number ? "Armstrong number" : "Not an Armstrong number");
    return 0;
}
