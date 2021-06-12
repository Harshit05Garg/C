// This program counts good triplets.
#include <stdio.h>
int abs(int x)
{
    if(x < 0)
        x *= -1;
    return x;
}
#define E 5
int main()
{
    int arr[E] = {1,2,3,4,5};
    int a = 8, b = 7, c = 9, ans = 0;
    for(int i = 0; i < E; i++)
    {
        for(int j = i+1; j < E; j++)
        {
            for(int k = j+1; k < E; k++)
            {
                if(abs(arr[i] - arr[j]) <= a && abs(arr[j] - arr[k]) <= b && abs(arr[i] - arr[k]) <= c)
                {
                    ans++;
                    printf("[%d, %d, %d], ", arr[i], arr[j], arr[k]);
                }
            }
        }
    }
    printf("\n%d", ans);
}