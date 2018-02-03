#include<stdio.h>
int main()
{
    long long int n,a[3];
    scanf("%lld",&n);
    a[0]=1;
    while(n--)
    {
        a[1]=a[0]*a[0];
        a[2]=a[1]*a[0];
        printf("%lld %lld %lld\n",a[0],a[1],a[2]);
        a[1]=a[1]+1;
        a[2]=a[2]+1;
        a[0]=a[0]+1;
    }
    return 0;
}
