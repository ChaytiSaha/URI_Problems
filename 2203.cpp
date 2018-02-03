#include <bits/stdc++.h>
using namespace std;
int main()
{
    int X,Y,x1, y1, x2, y2, v, r1, r2;
    double dstnce, range;
    while(scanf("%d%d%d%d", &x1, &y1, &x2, &y2) != EOF)
    {
        scanf("%d%d%d", &v, &r1, &r2);
        X = (x2-x1)*(x2-x1);
        Y = (y2-y1)*(y2-y1);
        dstnce = sqrt((double)X+Y);
        dstnce += v*1.50;
        range = (double)(r1+r2);
        if(dstnce > range) printf("N\n");
        else printf("Y\n");
    }
    return 0;
}
