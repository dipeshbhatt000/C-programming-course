#include <stdio.h>

int main(){
    int a;
    int ch = 'a';
    ch = 'b';
    ch = '\n'; // This is an escape sequence. It represents a new line character.
    printf ("Hey, I am good. \nNice to meet you.\n");
    printf ("Hey, I am good. \tNice to meet you.\n");
    printf ("Hey, I am good. \"Nice to meet you.\n");
    printf ("Hey, I am good. \'Nice to meet you.\n");
    printf ("Hey, I am good. \\Nice to meet you.\n");
    return 0;
}