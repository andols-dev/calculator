#include <stdio.h>
#include <stdlib.h>
int getOperator() {
    // Choose an operator
    printf("Choose an operator: + - / *\n");
    // get operator
    char op = getchar();
    return op;
}




int main()
{
    // numbers
    int num1, num2;
    char op;
    // get operator
    op = getOperator();

    printf("you have chosen %c\n", op);
    // Enter two numbers
    printf("Enter two numbers.\n");

    // Get and save two numbers

    scanf("%d %d", &num1, &num2);

    return 0;
}





