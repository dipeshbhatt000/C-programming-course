#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age > 10)
    {
        printf("The age is greater than 10\n");
    }
    else
    {
        printf("Your age is not greater than 10\n"); 
    }
    
    return 0;
}