//  Write a program to print 'n' natural numbers in reverse order.

#include<stdio.h>

int main()
{
    int n, i;
    printf("Enter nth number: ");
    scanf("%d", &n);

    for (i=n; i; i--){
        printf("%d\n", i);
    }
    return 0;
}