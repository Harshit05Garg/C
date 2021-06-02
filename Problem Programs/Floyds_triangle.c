#include <stdio.h>
int main()
{
    int no_of_rows, row, column, digit = 1;
    printf("How many rows of Floyd's triangle do you want to print? ");
    scanf("%d", &no_of_rows);
    for(row = 1; row <= no_of_rows; row++)
    {
        for(column = 1; column <= row; column++)
        {
            printf("%d ", digit);
            digit += 1;
        }
        printf("\n");
    }
    return 0;
}