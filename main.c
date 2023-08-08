#include <stdio.h>
#include <stdlib.h>

int main()
{
    // operator
    char op;

    // numbers
    int num1, num2;

    // Choose an operator
    printf("Choose an operator: + - / *\n");
    // get operator
    op = getchar();

    // Selected operator
    printf("You have chosen: %c\n", op);

    // Enter two numbers
    printf("Enter two numbers.\n");

    // Get and save two numbers
    scanf("%d %d", &num1, &num2);



    return 0;
}
