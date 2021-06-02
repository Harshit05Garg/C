#include <stdio.h>
int main()
{
    int input, result=0, quotient, remainder;
    printf("Enter the number here: ");
    scanf("%d", &input);
    quotient = input;
    while (quotient != 0) // This while loop reverses the number
    {
        remainder = quotient % 10;
        result = result * 10 + remainder; // It's reversing the number
        quotient = quotient/10; 
    }
    if (result == input)
        printf("It's a palindrome");
    else 
        printf("It's not a palindrome");
    return 0;
}