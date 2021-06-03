// This program does matrix multiplication for 2 matrices.
#include <stdio.h>
#define row 2
#define column 2
#define row2 2
#define column2 2
int main()
{
    if(column != row2)
    {
        printf("These two matrices have no resultant matrix.");
        return 0;
    }
    int matrix[row][column] = {
        {9,5},
        {8,2}
    };
    int matrix2[row2][column2] = {
        {5,2},
        {5,6}
    };
    int resultant_matrix[row][column2] = {0};
    int i, j, k, loop = 0;
    for(i=0; i<row; i++)
    {
        for(j=0; j<column2; j++)
        {
            int sum = 0;
            for(k=0; k<column; k++)
            {
                sum = sum + (matrix[i][k] * matrix2[k][j]);
            }
            resultant_matrix[i][j] = sum;
            printf("%d ", resultant_matrix[i][j]);
            loop++;
            if(loop == column2)
            {
                printf("\n");
                loop = 0;
            }
        }
    }
    return 0;
} 