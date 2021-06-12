// This program finds how many array numbers are smaller than arr[i].
#include <stdio.h>
# define E 5
int main()
{
    int arr[E] = {8,5,6,2,9};
    int ans[E];
    int i, j, sum;
    for(i=0; i < E; i++)
    {
        sum = 0;
        for(j = 0; j < E; j++)
        {
            if(arr[i] > arr[j])
                sum++;
        }
        ans[i] = sum;
    }
    for(i=0; i < E; i++)
        printf("%d ", ans[i]);
    return 0;
}