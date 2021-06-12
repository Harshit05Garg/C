// This program is used to flip an image.
#include <stdio.h>
#define row 3
#define column 3
int main()
{
    int image[row][column] = {{1,1,0},{1,0,1},{0,0,0}};
    for(int i=0; i < row; i++)
    {
        for(int j = 0; j <= column % 2; j++)
        {
            int temp = image[i][j];
            image[i][j] = image[i][column-j-1];
            image[i][column-j-1] = temp;
        }
    }
    for(int i=0; i < row; i++)
    {
        for(int j = 0; j < column; j++)
        {
            if(image[i][j] == 0)
                image[i][j] = 1;
            else
                image[i][j] = 0;
        }
    }
    for(int i=0; i < row; i++)                  // Print as matrix
    {
        for(int j = 0; j < column; j++)
        {
            if(j == column-1)
                printf("%d", image[i][j]);    
            else
                printf("%d, ", image[i][j]);
        }
        printf("\n");
    }
    // for(int i=0; i < row; i++)                  // Print as array
    // {
    //     printf("{");
    //     for(int j = 0; j < column; j++)
    //     {
    //         if(j == column-1)
    //             printf("%d", image[i][j]);    
    //         else
    //             printf("%d,", image[i][j]);
    //     }
    //     if(i == row-1)
    //         printf("}");
    //     else
    //         printf("},");
    // }
    return 0;
}