/* Category: Loops without Arrays/Strings */
/* Question 36: Find the greatest common divisor of two signed integers. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>
#include "../Day 1/io.h"

int main(void) {
    long long a, b;
    unsigned long long x, y, remainder;
    if (scanf("%lld %lld", &a, &b) != 2) { fprintf(stderr, "Expected two integers.\n"); return 1; }
    x = a < 0 ? (unsigned long long)(-(a + 1)) + 1ULL : (unsigned long long)a;
    y = b < 0 ? (unsigned long long)(-(b + 1)) + 1ULL : (unsigned long long)b;
    while (y != 0ULL) { remainder = x % y; x = y; y = remainder; }
    printf("%llu\n", x);
    return 0;
}
