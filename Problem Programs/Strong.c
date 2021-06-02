#include <stdio.h>
int main()
{
    int input, check, pro1, pro2 = 1, result = 0, digit;
    printf("Enter the number here: ");
    scanf("%d", &input);
    check = input;
    while(check != 0)
    {
    digit = check % 10;
        while(digit > 1)
        {
            pro1 = digit * (digit-1);
            pro2 = pro2 * pro1;
            digit -= 2;
        }
    result = result + pro2;
    pro2 = 1;
    check /= 10;
    }
    if (result == input)
        printf("It's a Strong number");
    else
        printf("It's not a Strong number");
}