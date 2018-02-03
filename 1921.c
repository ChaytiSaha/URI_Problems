#include<stdio.h>
int main()
{
    long long int a,i=2,sum=0;
    scanf("%lld",&a);
    while(i<a-1)
    {
        sum=sum+i;
        i++;
    }
    printf("%lld\n",sum);
    return 0;
}
