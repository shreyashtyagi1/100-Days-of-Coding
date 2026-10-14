//Q5: Write a program to convert temperature from Celsius to Fahrenheit.//

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 1.8) + 32;

    printf("%f°C is equal to %f°F\n", celsius, fahrenheit);

    return 0;
}

