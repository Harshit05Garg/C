#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter the two digits here: ");
    scanf("%d %d", &x, &y);
    while(y != 0)
    {
        if(y > 0)
        {
            x++;
            y--;
        }
        else
        {
            x--;
            y++;
        }
    }
    printf("Sum is %d", x);
    return 0;
}
/* Adding using bits
while(b != 0)
{
    Sum = a^b;
    Carry = (a & b) << 1;
    a = sum;
    b = carry;
}
*/