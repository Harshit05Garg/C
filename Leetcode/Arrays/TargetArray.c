// This program takes index from one array and number from the other and produces result.
#include <stdio.h>
#define E 5
int arrnum(int arr[], int num,  int i)
{
    for(int j=0; j < i; j++)
    {
        if(num == arr[j])
            return 1;
    }
    return 0;
}
int main()
{
    int nums[E] = {0,1,2,3,4};
    int index[E] = {0,1,3,1,4};
    int target[E] = {0};
    for(int i = 0; i < E; i++)
    {
        if(arrnum(index, index[i], i) == 1)
        {
            for(int j = i; j >= index[i]; j--)
            {
                target[j] = target[j-1];
            }
        }
        target[index[i]] = nums[i];
    }
    for(int i = 0; i < E; i++)
        printf("%d ", target[i]);
}