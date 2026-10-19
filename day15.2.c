//Q30: Write a program to reverse a given number.//

#include <stdio.h>
int main(){
    int num = 1234;

    printf("Original: %d\n",num);
    printf("Reversed: ");

    while (num > 0){
        int lastdigit = num % 10;  
        printf("%d", lastdigit);  
        num = num / 10;             
    }

    printf("\n");
    return 0;
}