#include<stdio.h>
int main()
{
    long long int t,n[1000],i,l=0;
    scanf("%lld",&t);
    for(i=0;i<1000;i++)
    {
        n[i]=l;
        printf("N[%lld] = %lld\n",i,n[i]);
        if(l<t-1) l++;
        else l=0;
    }
    return 0;
}
