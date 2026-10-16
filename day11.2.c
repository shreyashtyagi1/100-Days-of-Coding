//Q22: Write a program to find profit or loss percentage given cost price and selling price.//

#include <stdio.h>
int main(){
    int costprice,sellingprice,amount,percentage;

    printf("Enter Cost Price: ");
    scanf("%d",&costprice);

    printf("Enter Selling Price: ");
    scanf("%d",&sellingprice);

    if (sellingprice > costprice){
        amount = sellingprice - costprice;
        percentage = (amount / costprice) * 100;
        printf("Profit = %d\n",amount);
        printf("Profit Percentage = %d\n",percentage);
    }
    else if (costprice > sellingprice){
        amount = costprice - sellingprice;
        percentage = (amount / costprice) * 100;
        printf("Loss = %d\n",amount);
        printf("Loss Percentage = %d\n",percentage);
    }
    else {
        printf("No Profit, No Loss.\n");
    }
    return 0;
}