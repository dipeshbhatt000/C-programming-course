#include<stdio.h>

int main()
{
    int income;
    float tax;
    printf("Enter your income: \n");
    scanf("%d", &income);

    if ( income <= 250000){
       tax = 0;
    }
    else if (income > 250000 && income <= 500000){
        tax = 0.05 * (income - 250000);
    }
    else if (income > 500000 && income <= 1000000){
        tax = 0.05 * (500000 - 250000) + 0.2 * (income - 500000);
    }
    else{
        tax = 0.05 * (500000 - 250000) + 0.2 * (1000000 - 500000) + 0.3 * (income - 1000000);
    }
    printf("Your income is %d and tax to paid is %.2f\n", income, tax);
    return 0;
}