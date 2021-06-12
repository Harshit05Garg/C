// This program finds if adding extracandies to the arr[i] makes arr[i] the greatest number in the array.
#include <stdio.h>
# define E 5
int main()
{
    int candies[E] = {3,5,4,2,5};
    int i, extracandies = 2, max = 0;
    for(i=0; i < E; i++)
    {
        if(candies[i] > max)
            max = candies[i];
    }
    for(i=0; i<E; i++)
    {
        if(candies[i] + extracandies >= max)
            printf("true, ");
        else if(i == E-1 && candies[i] + extracandies >= max)
            printf("true.");
        else if(i == E-1 && candies[i] + extracandies < max)
            printf("false.");
        else
            printf("false, ");
    }
    return 0;
}