#include <stdio.h>

int main()
{
    int a = 10;
    if (a = 11) // This line contains an assignment operator (=) instead of a comparison operator (==). As a result, a is assigned the value 11, and the condition evaluates to true (non-zero).
        printf("I am 11");
    else
        printf("I am not 11");
    return 0;
}