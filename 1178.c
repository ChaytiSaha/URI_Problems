#include<stdio.h>
int main()
{
    double x,ara[100];
    int i;
    scanf("%lf",&x);
    for(i=0;i<100;i++)
    {
        ara[i]=x;
        printf("N[%d] = %.4lf\n",i,ara[i]);
        x=x/2;
    }
    return 0;
}
