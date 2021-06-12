// This program finds the result of array till arr[i].
#include <stdio.h>
int main()
{
    int arr[] = {1,2,3,4};
    int i, ele = sizeof arr / sizeof arr[0], j;
    for(i=0; i < ele; i++)
    {
        int sum = 0;
        for(j=0; j <= i; j++)
        {
            sum += arr[j];
        }
        printf("%d ", sum);
    }
    return 0;
}