/* Category: Loops without Arrays/Strings */
/* Question 37: Find the least common multiple of two signed integers. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>
#include "../Day 1/io.h"

int main(void) {
    long long a, b;
    unsigned long long x, y, first, second, remainder;
    if (scanf("%lld %lld", &a, &b) != 2) { fprintf(stderr, "Expected two integers.\n"); return 1; }
    first = a < 0 ? (unsigned long long)(-(a + 1)) + 1ULL : (unsigned long long)a;
    second = b < 0 ? (unsigned long long)(-(b + 1)) + 1ULL : (unsigned long long)b;
    if (first == 0ULL || second == 0ULL) { puts("0"); return 0; }
    x = first; y = second;
    while (y != 0ULL) { remainder = x % y; x = y; y = remainder; }
    first /= x;
    if (first > ULLONG_MAX / second) { fprintf(stderr, "LCM exceeds the supported range.\n"); return 1; }
    printf("%llu\n", first * second);
    return 0;
}
