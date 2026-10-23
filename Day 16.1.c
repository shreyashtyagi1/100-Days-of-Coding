/* Category: Loops without Arrays/Strings */
/* Question 31: Print the binary representation of a non-negative integer. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>
#include "../Day 1/io.h"

int main(void) {
    unsigned long long number;
    char digits[sizeof(number) * CHAR_BIT + 1];
    size_t length = 0U;
    if (scanf("%llu", &number) != 1) { fprintf(stderr, "Expected a non-negative integer.\n"); return 1; }
    do { digits[length++] = (char)('0' + number % 2ULL); number /= 2ULL; } while (number != 0ULL);
    while (length > 0U) putchar(digits[--length]);
    putchar('\n');
    return 0;
}
