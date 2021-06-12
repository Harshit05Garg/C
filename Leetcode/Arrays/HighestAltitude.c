// Highest altitude LeetCode.
#include <stdio.h>
#define n 5
int main()
{
    int gain[n] = {1,2,-5,4,2};
    int ans[n+1] = {0};
    for(int i = 0; i < n; i++)
    {
        if(i == 0)
            ans[i+1] = gain[i];
        else
            ans[i+1] = ans[i] + gain[i];
        // printf("%d ", ans[i+1]);     // This line is used to print ans array.
    }
    int min = 0, max = 0;
    for(int i = 0; i < n+1; i++)
    {
        if(ans[i] > max)
            max = ans[i];
        else if(ans[i] < min)
            min = ans[i];
    }
    printf("\n%d", max);
    return 0;
}