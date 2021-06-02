#include <stdio.h>
int store = 1, div = 2;
int gcd(int a, int b)
{
    if(a > 1 || b > 1 && div < a)
    {
        int c = a, d = b, div2 = div, div3 = div, mul1 = 0, mul2 = 0;
        if(a % div == 0)
        {
            while(a % div2 == 0)
            {
                a /= div2;
                mul1++;
            }
        }
        if(b % div == 0)
        {
            while(b % div3 == 0)
            {
                b /= div3;
                mul2++;
            }
        }
        if(c % div == 0 && d % div == 0)
        {
            if(mul1 >= mul2)
                div *= mul2;
            else
                div *= mul1;
            store *= div;
        }
        div++;
        gcd(a, b);
    }
    return store;
}
int main()
{
    int input1, input2;
    printf("Enter the numbers here: ");
    scanf("%d %d", &input1, &input2);
    printf("%d", gcd(input1, input2));
    return 0;
}