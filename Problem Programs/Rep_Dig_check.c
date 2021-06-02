#include <stdio.h>
#include "myhead.h"
int rep_dig_check(int input)
{
    int n_digits = no_of_digits(input);
    int arr[n_digits], i, j;
    for(i=0; i<n_digits; i++)
    {
        arr[i] = input % 10;
        input /= 10;
    }
    for(i=0; i<n_digits; i++)
    {
        for(j=i+1; j<n_digits; j++)
        {
            if(arr[i] == arr[j])
            {
                printf("Yes");
                return 0;
            }
        }
    }
    printf("No");
    return 0;
}
int main()
{
    int input;
    printf("Enter your number here: ");
    scanf("%d", &input);
    rep_dig_check(input);
    return 0;
}