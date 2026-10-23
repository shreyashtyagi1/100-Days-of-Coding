/* Category: Loops without Arrays/Strings */
/* Question 32: Determine whether a non-negative integer is a palindrome. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>
#include "../Day 1/io.h"

int main(void) {
    unsigned long long number, original, reversed = 0ULL;
    if (scanf("%llu", &number) != 1) { fprintf(stderr, "Expected a non-negative integer.\n"); return 1; }
    original = number;
    do {
        unsigned int digit = (unsigned int)(number % 10ULL);
        if (reversed > (ULLONG_MAX - digit) / 10ULL) {
            fprintf(stderr, "Reversed value is too large.\n");
            return 1;
        }
        reversed = reversed * 10ULL + digit;
        number /= 10ULL;
    } while (number != 0ULL);
    puts(original == reversed ? "Palindrome" : "Not a palindrome");
    return 0;
}
