#include<stdio.h>

int main()
{
    int i;
    for ( i = 0; i < 15; i++)
    {
        if (i==5)
        {
            // break; // exit the loop now!
            continue; // skip this iteration now!
        }
        
        printf("The value of i is %d \n", i);
    }
    
    return 0;
}