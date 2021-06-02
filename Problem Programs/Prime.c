#include <stdio.h>
#include <math.h>
int main()
{
    int input , temp, sqroot;
    printf("Enter the number here: ");
    scanf("%d", &input);
    sqroot = ceil(sqrt(input));
    while(sqroot >= 2)
    {
        temp = input % sqroot;
        if(temp != 0)
            sqroot--;
        else
            break;
    }
    if(input == 2)
        printf("%d is a prime number", input);
    else if (temp == 0)
        printf("%d is not a prime number", input);
    else
        printf("%d is a prime number", input);
    return 0;
}