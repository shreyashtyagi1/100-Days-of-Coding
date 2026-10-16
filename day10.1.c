//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.//

#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter side 1: ");
    scanf("%d",&a);
    
    printf("Enter side 2: ");
    scanf("%d",&b);
    
    printf("Enter side 3: ");
    scanf("%d",&c);

    if ((a + b <= c) || (a + c <= b) || (b + c <= a)) {
        printf("Not a valid triangle.\n");
    }
    else if (a == b && b == c) {
        printf("Equilateral Triangle.\n");
    }
    else if (a == b || b == c || a == c) {
        printf("Isosceles Triangle.\n");
    }
    else {
        printf("Scalene Triangle.\n");
    }
    return 0;
}