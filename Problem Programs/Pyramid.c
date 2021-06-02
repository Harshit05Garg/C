#include <stdio.h>
int main()
{
    int row;
    int column;
    int no_of_rows;
    char symbol;
    printf("How many rows you want to print?: ");
    scanf("%d", &no_of_rows);
    fflush(stdin);
    printf("What should be the symbol of the pyramid? : ");
    scanf("%c",&symbol);
    for(row = 1;row <= no_of_rows; row++)
    {
        for(column = 1; column <= 2 * no_of_rows - 1; column++)
        {
            if(column >= no_of_rows - (row-1) && column <= no_of_rows + (row-1))
                printf("%c",symbol);
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}