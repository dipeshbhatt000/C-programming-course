#include <stdio.h>

int main()
{
    int marks1, marks2, marks3;
    float total_percentage;
    printf("Enter marks1: \n");
    scanf("%d", &marks1);
    printf("Enter marks2: \n");
    scanf("%d", &marks2);
    printf("Enter marks3: \n");
    scanf("%d", &marks3);
    printf("The marks are %d, %d and %d\n", marks1, marks2, marks3);

    total_percentage = (marks1 + marks2 + marks3) / 3;

    if (marks1 >= 33 && marks2 >= 33 && marks3 >= 33 && total_percentage >= 40)
    {
        printf("You pass your exams\n");
    }

    else
    {
        printf("You are failed\n");
    }

// Alternative way to check the pass/fail condition using logical operators

    // if(marks1 < 33 || marks2 < 33 || marks3 < 33)
    // {
    //     printf("You are failed due to less marks in individual of the subjects\n");
    // }
    // else if (total_percentage < 40)
    // {
    //     printf("You are failed due to less total percentage\n");
    // }

    // else
    // {
    //     printf("You are passed!\n");
    // }
    return 0;
}