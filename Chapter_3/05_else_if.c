#include<stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age>60){
        printf("You can drive, your are a senior citizon\n");
    }
    else if (age>18){
        printf("You can drive!\n");
    }
    else{
        printf("You cannot drive, you are underage!\n");
    }
    return 0;
}