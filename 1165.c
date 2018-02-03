#include<stdio.h>
int main()
{
    long long int t,x,r,i;
    scanf("%lld",&t);
    while(t--)
    {
        r=0;
        scanf("%lld",&x);
        for(i=2;i<x;i++)
            if(x%i==0)
               r++;
        if(r>0)
            printf("%lld nao eh primo\n",x);
        else
            printf("%lld eh primo\n",x);
    }
    return 0;
}
