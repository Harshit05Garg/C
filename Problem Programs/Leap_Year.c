#include <stdio.h>
int main()
{
    int input;
    printf("Enter the year here: ");
    scanf("%d", &input);
    if(input % 400 == 0)
        printf("%d is a leap year", input);
    else if(input % 100 == 0)
        printf("%d is not a leap year", input);
    else if(input % 4 == 0)
        printf("%d is a leap year", input);
    else
        printf("%d is not a leap year", input);
    return 0;
}