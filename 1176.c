#include<stdio.h>
int main()
{
    long long int fib,fib1,fib2;
    long long int t,i,n,sum,a,b,x,d=1;
    scanf("%lld",&x);
    while(x--)
    {
    scanf("%lld%lld%lld",&a,&b,&t);
    sum=0;
    while(t--)
    {
        fib1=a;
        fib2=b;
        for(i=0;i<t;i++)
        {
            fib=fib2+fib1;
            fib1=fib2;
            fib2=fib;
        }
        sum=sum+fib1;
    }
    printf("Case %lld: %lld\n",d++,sum);
    }
    return 0;
}
