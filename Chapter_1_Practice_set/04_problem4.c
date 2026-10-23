#include <stdio.h>

int main()
{
    int P;
    int T;
    int R;

    printf("Enter Principal: ");
    scanf("%d", &P);

    printf("Enter Time: ");
    scanf("%d", &T);

    printf("Enter Rate: ");
    scanf("%d", &R);

    printf("The Simple Interest is: %d", (P * T * R) / 100);
    return 0;
}