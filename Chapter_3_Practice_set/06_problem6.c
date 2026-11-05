#include<stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter 1st number: \n");
    scanf("%d", &a);
    printf("Enter 2nd number: \n");
    scanf("%d", &b);
    printf("Enter 3rd number: \n");
    scanf("%d", &c);
    printf("Enter 4th number: \n");
    scanf("%d", &d);


    if(a>b && a>c && a>d){
        printf("The greatest number is %d\n", a);
    }
    else if(b>a && b>c && b>d){
        printf("The greatest number is %d\n", b);
    }
    else if(c>a && c>b && c>d){
        printf("The greatest number is %d\n", c);
    }
    else if(d>b && d>c && d>a){
        printf("The greatest number is %d\n", d);
    }
    return 0;
}