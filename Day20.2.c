/* Category: Loops without Arrays/Strings */
/* Question 40: Invert each bit in a binary numeral to form its one's complement. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>
#include "../Day 1/io.h"

int main(void) {
    char binary[256];
    size_t i;
    if (scanf("%255s", binary) != 1) { fprintf(stderr, "Expected a binary numeral.\n"); return 1; }
    for (i = 0U; binary[i] != '\0'; ++i) {
        if (binary[i] != '0' && binary[i] != '1') { fprintf(stderr, "Input must contain only zeroes and ones.\n"); return 1; }
        binary[i] = binary[i] == '0' ? '1' : '0';
    }
    puts(binary);
    return 0;
}
