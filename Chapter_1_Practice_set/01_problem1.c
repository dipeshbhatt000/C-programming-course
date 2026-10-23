#include<stdio.h>

int main()
{
    // int length = 5;
    // int breadth = 6;
    int Length, Breadth;

    printf("Enter the Length if rectangle:\n");
    scanf("%d", &Length);

    printf("Enter the Breadth of rectangle:\n");
    scanf("%d", &Breadth);
    
    printf("The area of rectangle is %d", Length*Breadth);
    return 0;
}