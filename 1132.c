#include<stdio.h>
int main()
{
    long long int t,x,y,i,sum=0;
    scanf("%lld%lld",&x,&y);
    if(x>y)
    {
        t=x;
        x=y;
        y=t;
    }
    for(i=x;i<=y;i++)
        if(i%13!=0)
            sum=sum+i;
    printf("%lld\n",sum);
    return 0;
}
