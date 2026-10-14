//Q6: Write a program to swap two numbers using a third variable.//

#include <stdio.h>

int main() {
    int a = 10, b = 20, t;

    printf("Before swapping: a = %d, b = %d\n", a, b);

    t = a;
    a = b;
    b = t;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
