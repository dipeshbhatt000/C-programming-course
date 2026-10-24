# C Programming Rules 

- We must create meaningful variable names.
    
    **Following are the Rules for C Programming:**

    ```c
    int a;
    int b;
    int dipesh;
    int Dipesh; // This is a valid variable name because C is case sensitive. So, dipesh and Dipesh are two different variables.

    int hey;

    int dipesh_bhatt; // We must use underscorre(_) instead of space or comma in variable name.

    int dipesh bhatt; // This will give an error because variable name can't contain spaces or commas.

    int dipesh1; // This will give an error because variable name can't contain number.

    int dipesh$; // This will give an error because variable name can't contain special characters.
    ```

    **Rules for Data Types in C Programming:**

    ```c
    int a;
    a = 1;

    int a = 1; // Variable declaration and initialization in one line.

    float b = 1.5; 
        
    float b;
    b = 1.5; 

    char c = 'd';

    char c;
    c = 'd';
    ```

    **To recieve user input on C Programming Language we use the following scanf( ) function**
    
- Syntax:

    ```c
    scanf("%d", &i);
    ```

- printf( ) function for integer, float and character:

```c
    printf ("The value of a is: %d\n", a);
    printf ("The value of b is: %f\n", b);
    printf ("The value of c is: %c\n", c);
```
        

**Some Escape Sequence Character:**

```c
printf ("Hey, I am good. \nNice to meet you.\n"); // \n is used to give a new line.

printf ("Hey, I am good. \tNice to meet you.\n"); // \t is used to give space between the word or line.

printf ("Hey, I am good. \"Nice to meet you.\n"); // \" is used to give (") mark on the line. 

printf ("Hey, I am good. \'Nice to meet you.\n"); // \' is used to give (') mark on the line.

printf ("Hey, I am good. \\Nice to meet you.\n"); // \\ (double backslash) is used to write backslash (\) on the line.
```
- Output:

```
Hey, I am good. 
Nice to meet you.
Hey, I am good.         Nice to meet you.
Hey, I am good. "Nice to meet you.
Hey, I am good. 'Nice to meet you.
Hey, I am good. \Nice to meet you.
```

