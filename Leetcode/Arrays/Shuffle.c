// This program shuffles the array(not randomly).
#include <stdio.h>
#define E 4
int main()
{
    int arr[E*2] = {1,2,3,4,5,6,7,8};
    int i, j;
    for(i=0; i < E; i++)
    {
        printf("%d %d ", arr[i], arr[E+i]);
    }
    return 0;
}