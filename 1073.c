#include<stdio.h>
int main()
{
    long long int i,n;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
            printf("%lld^2 = %lld\n",i,i*i);
    }
    return 0;
}
