//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.//

#include <stdio.h>
int main(){
    char op;
    int num1,num2;

    printf("Enter operator (+, -, *, /, %%): ");
    scanf("%c",&op);

    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);

    switch (op){
        case '+':
            printf("Result: %d\n", num1 + num2);
            break;
            case '-':
            printf("Result: %d\n", num1 - num2);
            break;
            case '*':
            printf("Result: %d\n", num1 * num2);
            break;
            case '/':
            printf("Result: %d\n", num1 / num2);
            break;
            case '%':
            printf("Result: %d\n", num1 % num2);
            break;
            default:
            printf("Invalid operator!\n");
    }
    return 0;
}