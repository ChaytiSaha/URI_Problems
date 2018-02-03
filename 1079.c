#include<stdio.h>
int main()
{
    int n;
    double x,y,z,avg;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%lf%lf%lf",&x,&y,&z);
        avg=(x*2.0+y*3.0+z*5.0)/10.0;
        printf("%.1lf\n",avg);
    }
    return 0;
}
