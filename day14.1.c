//Q27: Write a program to print the sum of the first n odd numbers.//

#include <stdio.h>
int main(){
    int n,sum;
    printf("Enter the number of terms: ");
    scanf("%d",&n);

    sum = n * n;
    printf("The sum of the first %d odd numbers is: %d\n",n,sum);

    return 0;
}