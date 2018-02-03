#include<stdio.h>
int main()
{
    long long int m,n,i,j;
    while(scanf("%lld%lld",&m,&n)!=EOF)
    {
        i=m;
        if(i==0) m=1;
        else{
            i=i-1;
            while(i>0)
            {
                m=m*i;
                i=i-1;
            }
        }
        j=n;
        if(j==0) n=1;
        else{
           j=j-1;
           while(j>0)
           {
               n=n*j;
               j=j-1;
           }
        }
        printf("%lld\n",m+n);
    }
    return 0;
}
