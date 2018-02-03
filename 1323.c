#include<stdio.h>
int main()
{
    int ans,n,t;
    while(scanf("%d",&n)==1)
    {
       if(n==0) break;
       t=(n*(n+1) * (2*n+1))/6;///1^1 + 2^2 + 3^3 +.......+ n*n = sum of  first n squares = (n*(n+1) * (2*n+1))/6;
       printf("%d\n",t);
    }
    return 0;
}

