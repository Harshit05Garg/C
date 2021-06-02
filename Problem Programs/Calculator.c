#include <stdio.h>
int main()
{
    int input1, input2, check, mul = 1, result = 0;
    char operator;
    while(1 == 1)
    {
        printf("Enter the numbers here: ");
        scanf("%d%c%d", &input1, &operator, &input2);
        check = input2;
        if(operator == '+')
            printf("Sum is %d", input1 + input2);
        else if(operator == '-')
            printf("Difference is %d", input1 - input2);
        else if(operator == '*')
            printf("Product is %d", input1 * input2);
        else if(operator == '/')
            printf("Quotient is %d", input1 / input2);
        else if(operator == '%')
            printf("Remainder is %d", input1 % input2);
        else if(operator == '^')
            {
                while(check != 0)
                {
                    mul = mul * input1;
                    check--;
                }
                printf("Answer is %d", mul);
                check = input2;
                mul = 1;
            }
        else
            printf("Please enter an operator between the digits\ne.g. %d*%d", input1, input2);
        printf("\n");
    }
    return 0;
}