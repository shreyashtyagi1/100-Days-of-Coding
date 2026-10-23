/* Category: Loops without Arrays/Strings */
/* Question 38: Find the sum of the decimal digits of a signed integer. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>
#include "../Day 1/io.h"

int main(void) {
    long long input;
    unsigned long long number, sum = 0ULL;
    if (scanf("%lld", &input) != 1) { fprintf(stderr, "Invalid integer input.\n"); return 1; }
    number = input < 0 ? (unsigned long long)(-(input + 1)) + 1ULL : (unsigned long long)input;
    do { sum += number % 10ULL; number /= 10ULL; } while (number != 0ULL);
    printf("%llu\n", sum);
    return 0;
}
