// This program finds how many times 1 number occurs inside the array.
#include <stdio.h>
# define E 5
int main()
{
    int arr[E] = {1,2,1,1,2};
    int i, j, sum = 0;
    for(i=0; i < E; i++)
    {
        for(j = i+1; j < E; j++)
        {
            if(arr[j] == arr[i])
                sum++;
        }
    }
    printf("There are %d good pairs in this array.", sum);
    return 0;
}