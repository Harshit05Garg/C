// This program prints arr[i] arr[i+1] times.
#include <stdio.h>
# define E 5
int main()
{
    int arr[E] = {8,5,6,2};
    int i, j, val;
    for(i=0; i < E / 2; i++)
    {
        for(val = arr[2*i+1]; val > 0; val--)
            printf("%d ", arr[2*i]);
    }
    return 0;
}