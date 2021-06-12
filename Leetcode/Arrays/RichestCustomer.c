// This program finds the largest 1d array sum;
#include <stdio.h>
int main()
{
    int accounts[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int i, j, sum, richest = 0, customer;
    for(i=0; i < 3; i++)
    {
        sum = 0;
        for(j=0; j < 3; j++)
        {
            sum += accounts[i][j];
        }
        if(richest < sum)
        {
            richest = sum;
            customer = i+1;
        }
    }
    printf("%d is the richest customer with %d wealth.", customer, richest);
    return 0;
}