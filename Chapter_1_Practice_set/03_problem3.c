#include<stdio.h>

int main()
{
    int Celsius;
    printf("Enter the temperature in Celsius: ");
    scanf("%d", &Celsius);
    
    printf("The temperature in Fahrenheit is: %f", (Celsius*9/5)+32);
    return 0;
}