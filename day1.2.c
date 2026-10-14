//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.//

#include <stdio.h>
int main() {
     
    float num1, num2,sum, difference, product,quotient;

    printf("Enter the first number: ");
    scanf("%f",&num1);
    
    printf("Enter the second number: ");
    scanf("%f",&num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    printf("Sum: %f\n",sum);
    printf("Difference: %f\n",difference);
    printf("Product: %f\n",product);

    if (num2 != 0) {
        quotient = num1 / num2;
        printf("Quotient: %f\n",quotient);
    } else {
        printf("Quotient:Division by zero is not allowed\n");
    }

    return 0;
}