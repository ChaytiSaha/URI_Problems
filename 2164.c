#include<stdio.h>
int main()
{
    int n;
    double x;
    scanf("%d",&n);
    x=(pow(((1.0+sqrt(5.0))/2.0),(double)n)-pow(((1.0-sqrt(5.0))/2.0),(double)n))/sqrt(5.0);
    printf("%.1lf\n",x);
    return 0;
}
