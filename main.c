#include <stdio.h>
#include <stdlib.h>

int main()
{
    // operator ariable
    char op;


    printf("Choose an operator: + - / *\n");
    // get operator
    op = getchar();

    printf("You have chosen: %c", op);
    return 0;
}
