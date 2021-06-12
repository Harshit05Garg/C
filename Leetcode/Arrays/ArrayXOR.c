#include <stdio.h>
#define E 5
int main()
{
    int n = 4, start = 3;
    int nums[n], temp = 0;
    for(int i=0; i < n; i++)
        nums[i] = start + 2*i;
    int xor = nums[0];
    for(int i=1; i < n; i++)
        xor ^= nums[i];
    printf("%d", xor);
    return 0;
}