#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: \n");
    scanf("%c", &ch);

    printf("The value of character is: %d\n", ch);

    // Check if the character falls within the lowercase ASCII range
    if (ch >= 'a' && ch <= 'z'){
        printf("This character is a lowercase\n");
    }
    else{
        printf("THis character is not a lowercase\n");
    }
    return 0;
}