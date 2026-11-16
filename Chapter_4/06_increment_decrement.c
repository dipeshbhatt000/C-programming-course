#include <stdio.h>

int main()
{
    int i = 5;
    printf("The value of i is %d\n", i); // 5
    i = i + 5;
    printf("The value of i is %d\n", i);   // 10
    printf("The value of i is %d\n", i++); // 10
    printf("The value of i is %d\n", i);   // 11

    // i++ prints i first and then increments i (Post increment Operator)
    // ++i increments i first and then prints i (Post increment Operator)

    printf("The value of i is %d\n", --i); // 10
    printf("The value of i is %d\n", i--); // 10

    // i-- prints i first and then decrements i (Post decrement Operator)
    // --i decrements i first and then prints i (Post decrement Operator)
    
    i+=2; // Same as i = i + 2
    printf("The value of i is %d\n", i); // 11 because i was 9 after the last decrement
    
    return 0;
}