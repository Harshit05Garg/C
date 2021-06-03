#include <stdio.h>
#define row 4
#define column 4
int main()
{
    int arr[3][row][column] = {
        {
            {1,2,3,1},
            {1,2,1,1},
            {3,1,2,1},
            {1,1,1,1}
        },
        {
            {1,2,3,1},
            {1,2,1,1},
            {3,1,2,1},
            {1,1,1,1}
        }
    };
    int i ,j, k, a = 0, b = 0, loop = 0;
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            int result = 0;
            for(k=0; k<row; k++)
            {
                result = result + (arr[0][i][k] * arr[1][k][j]);
            }
            arr[2][a][b] = result;
            printf("%d ", arr[2][a][b]);
            b++;
            if(b == column && a < row-1)
            {
                b = 0;
                a++;
            }
            loop++;
            if(loop == column)
            {
                printf("\n");
                loop = 0;
            }
        }
    }
    return 0;
}