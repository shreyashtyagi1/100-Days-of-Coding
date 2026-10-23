/* Category: Loops without Arrays/Strings */
/* Question 35: Print all positive factors of a positive integer. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>
#include "../Day 1/io.h"

int main(void) {
    unsigned long long number, divisor;
    if (scanf("%llu", &number) != 1 || number == 0ULL) { fprintf(stderr, "Enter a positive integer.\n"); return 1; }
    for (divisor = 1ULL; divisor <= number / divisor; ++divisor) {
        if (number % divisor == 0ULL) {
            printf("%llu", divisor);
            if (divisor != number / divisor) printf(" %llu", number / divisor);
            putchar('\n');
        }
    }
    return 0;
}
