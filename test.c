#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1;
    float num2;
    char operator;

    printf("Enter your first number: ");
    scanf("%1f", &num1);
    printf("Enter your operator: ");
    // when getting a character in c  with scanf you always need a space befor the % sign or it will error out
    scanf(" %c", &operator);
    printf("Enter your second number: ");
    scanf("%1f", &num2);

    if (operator== '+')
    {
        printf("%f", num1 + num2);
    }
    else if (operator== '-')
    {
        printf("%f", num1 - num2);
    }
    else if (operator== '/')
    {
        printf("%f", num1 / num2);
    }
    else if (operator== '*')
    {
        printf("%f", num1 * num2);
    }
    else
    {
        printf("Please enter a valid operator to calculate");
    }

    return 0;
}