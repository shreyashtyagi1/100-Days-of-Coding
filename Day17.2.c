/* Category: Loops without Arrays/Strings */
/* Question 34: Determine whether an integer is prime. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>
#include "../Day 1/io.h"

int main(void) {
    long long number, divisor;
    int prime = 1;
    if (scanf("%lld", &number) != 1) { fprintf(stderr, "Invalid integer input.\n"); return 1; }
    if (number < 2) prime = 0;
    for (divisor = 2; prime && divisor <= number / divisor; ++divisor)
        if (number % divisor == 0) prime = 0;
    puts(prime ? "Prime" : "Not prime");
    return 0;
}
