# Simple Calculator App

This is a simple calculator app written in C that allows users to perform basic arithmetic operations (+, -, *, /) on two numbers.

## Features

- User can choose an operator (+, -, /, *) to perform an arithmetic operation.
- User can input two numbers.
- The program calculates the result of the chosen operation and displays it.

## Code Explanation

```c
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Function to get the operator chosen by the user
int getOperator() {
    printf("Choose an operator: + - / *\n");
    char op = getchar();
    while (getchar() != '\n'); // Clear input buffer
    return op;
}

// Function to check if a character is a valid operator
bool isOperator(char op) {
    return op == '+' || op == '-' ||  op == '/' || op =='*';
}

// Arithmetic operations
int add(int num1, int num2) {
    return num1 + num2;
}

int subtract(int num1, int num2) {
    return num1 - num2;
}

int multiply(int num1, int num2) {
    return num1 * num2;
}

float divide(int num1, int num2) {
    return (float)num1 / num2;
}

// Function to perform the calculation based on chosen operator
int calculate(int num1, int num2, char op) {
    int result;
    switch (op) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            break;
    }
    return result;
}

// Function to input two numbers chosen by the user
void chooseNumbers(int *num1, int *num2) {
    printf("Enter two numbers.\n");
    scanf("%d %d", num1, num2);
}

int main() {
    int num1, num2, result;
    char op;

    // User chooses an operator
    while(1) {
        op = getOperator();
        if (!isOperator(op)) {
            printf("You need to enter a valid operator");
        } else {
            break;
        }
    }

    // User chooses two numbers
    chooseNumbers(&num1, &num2);

    // Calculate and display the result
    result = calculate(num1, num2, op);
    printf("Result: %d\n", result);
    return 0;
}
