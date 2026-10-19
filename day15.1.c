//Q29: Write a program to calculate the factorial of a number.//

#include <stdio.h>
int main(){
    int num;
    int factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d",&num);

    if (num < 0){
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        int i = num;
        
        while (i > 1) {
            factorial *= i;
            i--;
        }
        printf("Factorial of %d = %d\n", num, factorial);
    }
    return 0;
}