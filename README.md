# Simple Calculator

This is a simple calculator that allows the user to choose an operator and perform calculations with two numbers.

## How to Use the Program

1. Compile the code using a C compiler.

2. Run the compiled program. Follow the instructions to enter an operator and two numbers.

## Code Example

Here's how the program handles operator input and performs simple calculations:

```c
#include <stdio.h>
#include <stdbool.h>

int getOperator() {
    printf("Choose an operator: + - / *\n");
    char op;
    scanf(" %c", &op); // Ignore any leftover characters including newline
    return op;
}

bool isOperator(char op) {
    return op == '+' || op == '-' ||  op == '/' || op =='*';
}

int add(int num1, int num2) {
    int result;
    result = num1 + num2;
    return result;
}

int calculate(int num1, int num2, char op) {
    int result;
    switch (op) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            printf("-");
            break;
        case '*':
            printf("*");
            break;
        case '/':
            printf("/");
            break;
    }
    return result;
}

int main() {
    int num1, num2, result;
    char op;

    while (1) {
        op = getOperator();
        if (!isOperator(op)) {
            printf("You need to enter a valid operator\n");
        } else {
            break;
        }
    }

    printf("Enter two numbers.\n");
    scanf("%d %d", &num1, &num2);

    result = calculate(num1, num2, op);
    printf("Result: %d\n", result);

    return 0;
}

