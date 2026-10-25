    #include<stdio.h>
    
    int main()
    {
        int i = 10; // Declaring an integer variable i and initialize with 10
        int j = i;  // Declaring an integer variable j and initialize with the value of i
        int a = 2, b = 3, c = 4, d = 5; // Declaring multiple integer variables

        // %d is a format specifier
        // %d is for int, %f is for float, and %c is for char
        printf("The value of i is %d and value of j is %d\n", i, j);
        printf("The value of a is %d and value of b is %d\n", a, b);
        printf("The value of c is %d and value of d is %d\n", c, d);
        return 0;
    }