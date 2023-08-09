#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int getOperator() {
    // Choose an operator
    printf("Choose an operator: + - / *\n");
    // get operator
    char op = getchar();
    return op;
}

bool isOperator(char op) {
    return op == '+' || op == '-' ||  op == '/' || op =='*';
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
            printf("You need to enter a valid opeartor");
        } else {
            break;
        }
    }


    // Enter two numbers
    printf("Enter two numbers.\n");

    // Get and save two numbers
    scanf("%d %d", &num1, &num2);



    return 0;
}





