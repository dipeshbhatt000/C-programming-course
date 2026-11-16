# Loop Control Instructions in C

Loops allow a program to execute a block of code repeatedly as long as a specified condition is true. 

There are **3 types of loops** in C:
1. `while` loop
2. `do-while` loop
3. `for` loop

---

## 1. `while` Loop
Checks the condition **first**, then executes the code block.

**Syntax:**
```c
while (condition) {
    // code to execute
}
```

**Example:**
```c
#include <stdio.h>

int main() {
    int i = 0;
    while (i < 10) {
        printf("The value of i is %d\n", i);
        i++;
    }
    return 0;
}
```
> **Note:** If the condition never becomes false, the loop runs forever. This is called an **infinite loop**.

---

## 2. `do-while` Loop
Executes the code block **at least once** before checking the condition.

**Syntax:**
```c
do {
    // code to execute
} while (condition);
```

**Example:**
```c
#include <stdio.h>

int main() {
    int i = 0;
    do {
        printf("The value of i is %d\n", i);
        i++;
    } while (i < 4);
    return 0;
}
```

---

## 3. `for` Loop
Best used when the number of iterations is known beforehand.

**Syntax:**
```c
for (initialize; test; increment/decrement) {
    // code to execute
}
```
* **Initialize:** Sets the starting value of the loop control variable.
* **Test:** Checks the condition before each iteration.
* **Increment/Decrement:** Updates the loop variable after each iteration.

**Example:**
```c
#include <stdio.h>

int main() {
    int n = 6;
    for (int i = 0; i < n; i++) {
        printf("The value of i is %d\n", i);
    }
    return 0;
}
```

### Decrementing `for` Loop
In C, any non-zero value is treated as `true`, and `0` is treated as `false`.

```c
#include <stdio.h>

int main() {
    for (int i = 5; i; i--) {
        printf("%d\n", i); // Prints 5 down to 1, stops when i becomes 0
    }
    return 0;
}
```

---

## Increment, Decrement & Compound Operators

| Operator | Name | Description |
| :--- | :--- | :--- |
| `i++` | Post-increment | Uses `i` first, then increases `i` by 1. |
| `++i` | Pre-increment | Increases `i` by 1 first, then uses `i`. |
| `i--` | Post-decrement | Uses `i` first, then decreases `i` by 1. |
| `--i` | Pre-decrement | Decreases `i` by 1 first, then uses `i`. |

* **Compound Assignment Operators:** Shorthand ways to update variables: `+=`, `-=`, `*=`, `/=`, `%=`, `&=`. *(e.g., `i += 2` is the same as `i = i + 2`)*.
* **Note:** Operators like `+++` do not exist in C.

**Example:**
```c
#include <stdio.h>

int main() {
    int i = 5;
    printf("%d\n", i++); // Prints 5, then i becomes 6
    printf("%d\n", ++i); // i becomes 7, then prints 7
    printf("%d\n", i--); // Prints 7, then i becomes 6
    printf("%d\n", --i); // i becomes 5, then prints 5
    return 0;
}
```

---

## Loop Control Statements

### `break` Statement
Immediately exits the loop entirely, regardless of whether the loop condition is still true.

```c
for (int i = 0; i < 15; i++) {
    if (i == 5) {
        break; // Exits the loop when i reaches 5
    }
    printf("%d ", i); // Output: 0 1 2 3 4
}
```

### `continue` Statement
Skips the remaining code in the current iteration and jumps straight to the next iteration.

```c
for (int i = 0; i < 10; i++) {
    if (i == 5) {
        continue; // Skips printing 5
    }
    printf("%d ", i); // Output: 0 1 2 3 4 6 7 8 9
}
```
