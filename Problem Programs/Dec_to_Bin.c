#include <stdio.h>
long long int place = 1, result = 0;
long long int bin(int input)
{
    if(input <= 0)
        return 0;
    result = result + (input % 2) * place;
    place *= 10;
    bin(input / 2);
    return result;
}
int main()
{
    int input = 856;
    printf("%lld", bin(input));
    return 0;
}