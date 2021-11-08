#include <stdio.h>
#include <stdlib.h>

int main()
{
    double user_num1;
    double user_num2;
    char operator;

    printf("Enter your first number: ");
    scanf("%lf", &user_num1);
    printf("Enter your operator:");
    // when getting a character in c  with scanf you always need a space befor the % sign or it will error out
    scanf(" %c", &operator);
    printf("Enter your second number");
    scanf("%1f, &user_num2: ");


if(operator == '+'){
    printf("%f", user_num1 + user_num2);
} else if (operator == '-'){
    printf("%f", user_num1 - user_num2);
} else if 







    return 0;
}