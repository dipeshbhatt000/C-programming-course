#include <stdio.h>

int main()
{
    int a = 4;
    int b = 3;
    int c = a + b;

    printf("The value of a is %d, value of b is %d and the sum is %d\n", a, b, c);
    // Modulus is used to find remainder of a division operator
    printf("The remainder when a is divided by b is %d", a % b);

    // This does not work for exponentiation in C
    // int i = a^b;
    return 0;
}