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
void calculate(int num1, int num2, char op) {
    switch (op) {
        case '+':
            printf("+");
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
}


int main()
{
    // numbers
    int num1, num2;
    char op;

    // get operator
    while(1) {
        op = getOperator();
        if (!isOperator(op)) {
            printf("You need to enter a valid operator");

        } else {
            break;
        }
    }


    // Enter two numbers
    printf("Enter two numbers.\n");

    // Get and save two numbers
    scanf("%d %d", &num1, &num2);

    // calculate two numbers
    calculate(num1, num2, op);
    return 0;
}





