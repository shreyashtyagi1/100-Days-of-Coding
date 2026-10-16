//Q17: Write a program to find the roots of a quadratic equation and categorize them.//

#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c;
    int discriminant,root1,root2,realPart,imagPart;

    printf("Enter coefficients a,b and c: ");
    scanf("%d %d %d",&a,&b,&c);

    printf("Discriminant = %d\n",discriminant);

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        
        printf("Categorization: Two distinct real roots.\n");
        printf("Root 1 = %d\n", root1);
        printf("Root 2 = %d\n", root2);
    }
    else if (discriminant == 0){
        root1 = root2 = -b / (2 * a);
        
        printf("Categorization: Two equal real roots.\n");
        printf("Root 1 = Root 2 = %d\n", root1);
    }
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        
        printf("Categorization: Two distinct complex roots.\n");
        printf("Root 1 = %d + %di\n", realPart, imagPart);
        printf("Root 2 = %d - %di\n", realPart, imagPart);
    }
    return 0;
}