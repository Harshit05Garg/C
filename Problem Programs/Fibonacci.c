#include <stdio.h>
int main()
{
    int input, term, a = 0, b = 1, result;
    printf("Enter the number of terms you want of Fibonacci Series: ");
    scanf("%d", &input);
    for(term = 1; term <= input; term++)
    {
        printf("%u ", a);
        result = a + b;
        a = b;
        b = result;
    }
    return 0;
}