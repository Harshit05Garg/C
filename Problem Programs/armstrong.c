#include <stdio.h>
#include <math.h>
int main()
{
    int input, check, digit, power = 0, temp, result = 0, power2, mul = 1;
    printf("Enter the number here: ");
    scanf("%d", &input);
    check = input;
    while (check != 0)
    {
        check = check / 10;
        power++;
    }
    check = input;
    power2 = power;
    while (check != 0)
    {
    digit = check % 10;
        while(power != 0)
        {
            mul = mul * digit;
            power--;
        }
        result += mul;
        mul = 1;
        power = power2;
        check /= 10;
    }
    if (result == input)
        printf("It's an Armstrong number");
    else
        printf("It's not an Armstrong number");
    return 0;
}