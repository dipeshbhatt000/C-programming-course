# Variables Declaration

## 1. Type Declaration Instructions

```c
int a; // Declaring an integer variable a

float b; // Declaring an floating varaible b

int i = 10; // Declaring an integer variable i and initialize with 10

int j = i;  // Declaring an integer variable j and initialize with the value of i

int a = 2, b = 3, c = 4, d = 5; // Declaring multiple integer variables

// %d is a format specifier.
// %d is for int, %f is for float, and %c is for char

printf("The value of i is %d and value of j is %d", i, j);
printf("The value of a is %d and value of b is %d\n", a, b);
printf("The value of c is %d and value of d is %d\n", c, d);
```

**Invalid variable declaration:**

```c
int a; // Declaring an integer variable 'a'

// float b = a + 3; // This is invalid because 'a' is already used on before variable declaration

// float a = 1.4; // This is also invalid because variable 'a' is already there
```  

**Valid variable declaration:**

```c
int a, b, c, d;
int a = b = c = d = 30; // a, b, c, d all equal to 30
```

## 2. Arithmetic Instructions:

Following are some common use operations:

```c
+ (Addition)
- (Subtraction) 
* (Multiplication)
/ (Division)
% (Modulus)
= (Equal To) // '=' isAssignment Operator
```

```c
X + Y = Z // X and Y are Operands, + and = are Operators and Z is result

// Operands can be float/int etc. +,-,*,/ are Arithmetic Operators

int b = 2, c = 3;
int z; z = b*c; // Allowed
int z; b*c = z; // Not Allowed
```

**Modulus Operator:**
```c
int a = 4;
int b = 3;
int c = a + b;

printf("The value of a is %d, value of b is %d and the sum is %d\n", a, b, c);

// Modulus is used to find remainder of a division operator
printf("The remainder when a is divided by b is %d", a%b);

// Modulus cannot be apply on float 

-5%2 = -1 // If we use -ve values of variables, the sign of remiander is same as of numerator.

// Operators sign must be include
int i = ab; // Invalid
int i = a*b; // Valid

// There is no Operator to perform exponentiation in C.

// This does not work for exponentiation in C
// int i = a^b; // Invalid
```

## 3. Type Conversion:

An Arithmetic Operation between 

- int and int → int
- int and float → float
- float and float → float

```c
int a = 9; // If we do Operation between int and int, the Output will be an integer
int b = 2;
float c = 9/2;
printf("The value of a/b is %f", c); 
```

Output:

```c
The value of a/b is 4.000000 // is an integer
```

If we need a floating value in Output of above program, we have to use  following program.

```c
float a = 9.0; // If we do Operation between int and float the Output will be float
int b = 2;
float c = a/b;
printf("The value of a/b is %f", c);
```

Output:
```c
The value of a/b is 4.500000 // is a floating value
```

```c
// If we write,
 int a = 3.5; // the floating 3.5 is demoted to 3, losing the fractional part because 'a' is an integer

 // Similarly, if we write,
 float a = 8; // the integer 8 is promoted to 8.0, matching the float type of variable 'a'


 // Example:

int d = 6.7
printf("The value of d is %d", d);

// The Output will be
The value of d is 6 // The fractional part is demoted
```

## 4. Operator Priority:

```c
  Priority            Operators

1st Priority            * / %
1st Priority             + -
1st Priority              =

// Operators of higher priority are evaluated first in absence of parenthesis()

// We must use parenthesis in our program because by using parenthesis we already knew which operation is evaluating first
```

## 5. Operator Associavity:

When Operator of equal priority are present in an operation (such as *, /, %), then the tie is taken by associativity.

Example:

```c
x*y/z → (x*y)/z // Use left to right associativity in case of confusion

x/y*z → (x/y)*z // Use left to right associativity in case of confusion

int a = 3;
int b = 6;
int c = 9;
printf("The value is %d", a*b/c +7); // Used left to right associativity (a*b)/c +7
printf("The value is %d\n", 3*b/2*c + 7*a); // Used left to right associativity (3*b)/2(*c) + (7*a)

// Output:
The value is 9
The value is 102
```
- *,/ follow left to right associativity.
  
Always use parenthesis in case of confusion

## 6. TypeCasting:

We can convert the datatype by following method

```c
int n = 45;
float m = 32.4;
n = (int) m; // Convert the datatype to int
printf("%d", n);
```
Output:
```c
32
```
The floating point value convert into an integer.