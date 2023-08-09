#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int getOperator() {
    // Choose an operator
    printf("Choose an operator: + - / *\n");
    // get operator
    char op = getchar();
    while (getchar() != '\n'); // Rensa inmatningsbufferten
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
 void chooseNumbers(int *num1, int *num2) {
        // User enter two numbers
        printf("Enter two numbers.\n");

        // Get and save two numbers chosen by user
        scanf("%d %d", num1, num2);
    }

int main()
{
    // user numbers and result of calculated numbers
    int num1, num2, result;
    // operator +, -, /, *
    char op;

    // User chooses an operator to use
    while(1) {
        op = getOperator();
        if (!isOperator(op)) {
            printf("You need to enter a valid operator");
        } else {
            break;
        }
    }
    // choose numbers
   chooseNumbers(&num1, &num2);


    // calculate two numbers chosen by user
    result = calculate(num1, num2, op);

    printf("Result: %d\n", result);
    return 0;
}





