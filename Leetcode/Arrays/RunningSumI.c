// This program finds the result of array till arr[i].
#include <stdio.h>
int main()
{
    int arr[] = {1,2,3,4};
    int ele = sizeof arr / sizeof arr[0], j;
    for(int i = 1; i < ele; i++)
        arr[i] += arr[i-1];
    for(int i = 0; i < ele; i++)
        printf("%d ", arr[i]);
    return 0;
}