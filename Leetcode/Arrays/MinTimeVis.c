// This program calculates time taken(in sec) to travel between several points on a 2d plane.
#include <stdio.h>
#define row 4
int main()
{
    int points[row][2] = {{-1,2},{1,2},{3,5},{-4,-13}};
    int ans = 0;
    for(int i = 0; i < row-1; i++)
    {
        while(points[i][0] != points[i+1][0] || points[i][1] != points[i+1][1])
        {
            if(points[i][0] != points[i+1][0] && points[i][1] != points[i+1][1])
            {
                if(points[i+1][0] < points[i][0])
                    points[i][0]--;
                else
                    points[i][0]++;
                if(points[i+1][1] < points[i][1])
                    points[i][1]--;
                else
                    points[i][1]++;
            }
            else if(points[i][0] == points[i+1][0] && points[i][1] != points[i+1][1])
            {
                if(points[i+1][1] < points[i][1])
                    points[i][1]--;
                else
                    points[i][1]++;
            }
            else if(points[i][0] != points[i+1][0] && points[i][1] == points[i+1][1])
            {
                if(points[i+1][0] < points[i][0])
                    points[i][0]--;
                else
                    points[i][0]++;
            }
            else
                break;
            ans++;
        }
    }
    printf("%d", ans);
    return 0;
}