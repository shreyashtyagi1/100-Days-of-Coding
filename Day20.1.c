/* Category: Loops without Arrays/Strings */
/* Question 39: Find the product of the odd decimal digits of a non-negative integer. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>
#include "../Day 1/io.h"

int main(void) {
    unsigned long long number, product = 1ULL;
    int found = 0;
    if (scanf("%llu", &number) != 1) { fprintf(stderr, "Expected a non-negative integer.\n"); return 1; }
    do {
        unsigned int digit = (unsigned int)(number % 10ULL);
        if (digit % 2U == 1U) {
            if (product > ULLONG_MAX / digit) { fprintf(stderr, "Product exceeds the supported range.\n"); return 1; }
            product *= digit;
            found = 1;
        }
        number /= 10ULL;
    } while (number != 0ULL);
    printf("%llu\n", found ? product : 0ULL);
    return 0;
}
