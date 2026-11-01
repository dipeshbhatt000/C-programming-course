# Decision-Making Instructions in C

* **if-else statement**
* **switch statement**
  
## 1. IF-ELSE Statement

### Syntax

```c
if (condition_to_be_taken) {
    // Statements if condition is true
} 
else {
    // Statements if condition is false
}
```

---

### Example

```c
int age;
printf("Enter your age: ");
scanf("%d", &age);

if (age > 10) {
    // If the age is greater than 10, this line will execute; otherwise, it will be skipped.
    printf("The age is greater than 10\n"); 
}

if (age % 5 == 0) {
    // If the age is divisible by 5, this line will execute; otherwise, it will be skipped.
    printf("Your age is divisible by 5\n"); 
}
else {
    // If the age is not greater than 10, this line will execute.
    printf("Your age is not greater than 10\n"); 
}
```


## Operators In C


### 1. Relational Operators In C:

**Relational Operators** are used to evaluate conditions (true or false) inside 'if' statements.

* **Examples:**
```text
== , >= , > , < , <= , != 

'==' is Equals and '!=' is Not Equal To
```
**Important Note:** '=' is an assignment operator whereas '==' is used for equality check.

In C, a non-zero value is considered to be true.
```c
if (1){
    printf("This if is excuted!\n");
}
    if (4434){
    printf("This if is also excuted!\n");
}
    if (2.7){
    printf("This if is also excuted!\n");
}
if ('c'){
    printf("This if is also excuted!\n");
}
if (0){
    printf("This if is not excuted!\n"); // This will not execute because it contains zero
}
```

---

### 2. Logical Operators In C:

There are three **Logical Operators** in C.\
They are: && , || and !

These are read as 'AND', 'OR' and 'NOT'. And used to provide logic in C.

#### **Usage of Logical Operator:**

1. && (AND) → is true when both the conditions are true.
   a. "1 and 0" is evaluated as false.\
   b. "0 and 0" is evaluated as false.\
   c. "1 and 1" is evaluated as true.

2. || (OR) → is true when at least one condition is true.\
   a. "1 or 0" → 1\
   b. "0 or 0" → 0\
   c. "1 or 1" → 1

3. ! (NOT) → returns true if given false and returns false if given true.\
   a. !(3==3) → evaluates to false\
   b. !(3>30) → evaluates to true

---
```c
if (a){
    if (b){
        printf("both are true\n");
}
}

// This is called Nested IF
```
---

### ELSE-IF:

```c
#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age>60){
        printf("You can drive, your are a senior citizon\n");
    }
    else if (age>18){
        printf("You can drive!\n");
    }
    else{
        printf("You cannot drive, you are underage!\n");
    }
    return 0;
}
```

* **Output:**
  
```c
Enter your age: 10
You cannot drive, you are underage!

Enter your age: 18
You cannot drive, you are underage!

Enter your age: 70
You can drive, your are a senior citizon
```
---

* **Note:**
1. Using if-else-if-else reduces indents.
2. Using else is optional.
3. There can be any no. of 'else-if'.
4. Last else is executed only if all conditions fail.


## Operator Priority:

```c
  Priority        Operators

1st Priority          !
2st Priority        *, /, %
3st Priority         +, -
4st Priority       <>, <=, >=
5st Priority         ==, !=
6st Priority          &&
7st Priority          ||
8st Priority          =
```

### **Shorthand process to use if-else:**
  
### Syntax:
```text
condition ? expression-if-true : expression-if-false
```
This is also called ternary in C.

---
### Example:

```c
#include<stdio.h>

int main()
{
    // condition ? expression-if-true : expression-if-false
    int a = 434;
    int b = 342332534;
    a>b?printf("a is greater") : printf("b is greater");
    return 0;
}
```
### Output:

```text
b is greater
```
---

## 2. Switch Statement


### Syntax:

```c
switch (expression) {
    case constant1:
        // Statements if expression == constant1
        break;
    case constant2:
        // Statements if expression == constant2
        break;
    default:
        // Statements if no case matches
}
```

### Example:

```c
#include<stdio.h> 

int main() { 
    int a; 
    printf("Enter a: "); 
    scanf ("%d", &a); 
    
    switch(a){ 
        case 1: 
            printf("You entered 1\n"); 
            break; 
        case 2: 
            printf("You entered 2\n"); 
            break; 
        case 3: 
            printf("You entered 3\n"); 
            break; 
        case 4: 
            printf("You entered 4\n"); 
            break; 
        default: 
            printf("Nothing matched\n"); 
    } 
    return 0; 
}
```

### Output:

```text
Enter a: 2
You entered 2

Enter a: 5
Nothing matched
```

### Switch Terminology In C


### 1. Switch Expression:

The variable or expression inside the switch() brackets.\
* **Important Note:** It must evaluate to an integral (int) or character (char) type. Floating-point values (float, double) are not allowed.

### 2. Case Labels:

The program jumps directly to the matching case constant label.\
* **Important Note:** Every case value must be a constant literal or macro, and each label must be completely unique.

### 3. Break Statement:

Used to terminate a case block and exit the entire switch structure.
```c
case 1: 
    printf("You entered 1\n"); 
    break; // Exits the switch instantly
```

If you do not include a break statement, execution will continue into the next case block automatically. This behavior is called fall-through.

```c
switch(a) {
    case 1:
        printf("One\n"); // If a is 1, this prints...
    case 2:
        printf("Two\n"); // ...and then this prints too because there is no break!
}
```

### 4. Default Case:

The fallback block that runs only if none of the explicit case constants match the expression.\
* Using default is optional but highly recommended to catch unexpected inputs.\

* Note:
1. Switch statements make multi-way branching cleaner than deep if-else-if nesting.
2. The default case does not require a break if it is placed at the very bottom.
3. Multiple case labels can share the same execution statements to group selections together.
