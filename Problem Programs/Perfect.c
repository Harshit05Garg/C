#include <stdio.h>
int main()
{
    int input, temp, result = 0, div;
    printf("Enter the number here: ");
    scanf("%d", &input);
    div = input - 1;
    while(div != 0)
    {
        temp = input % div;
        if(temp == 0)
            result = result + div;
        div--;
    }
    if(result == input)
        printf("%d is a perfect number", input);
    else
        printf("%d is not a perfect number", input);
    return 0;
}