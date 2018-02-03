#include<stdio.h>
int main()
{
    long long int i,n;
    scanf("%lld",&n);
    i=n-1;
    while(i)
        n=n*i--;
    printf("%lld\n",n);
    return 0;
}
