#include<stdio.h>
int main()
{
    long  t,r,a=0,b=0;
    double p,q;
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld%ld%lf%lf",&a,&b,&p,&q);
        r=0;
        while(a<=b)
        {
            a=a+(long)((a*p)/100.0);
            b=b+(long)((b*q)/100.0);
            r++;
        }
        if(r<=100)printf("%ld anos.\n",r);
        else printf("Mais de 1 seculo.\n");
    }
    return 0;
}
