#include<stdio.h>
int main()
{
    long long int x,i,t,sum;
    scanf("%lld",&t);
    while(t--)
    {
       sum=0;
       scanf("%lld",&x);
       for(i=1;i<x;i++)
       {
           if(x%i==0)
              sum=sum+i;
       }
       if(sum==x)
          printf("%lld eh perfeito\n",x);
       else
          printf("%lld nao eh perfeito\n",x);
    }
    return 0;
}
