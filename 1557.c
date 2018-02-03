#include<stdio.h>
int main()
{
    long int x;
    while(1)
    {
        scanf("%ld",&x);
        if(x==0) break;
        long int ara[x][x],n,r=1,i,a,b,p=0,m=1,s=1,j,q=1;
        n=x*2-1;
        for(i=1;i<=n;i++,r++)
        {
            if(i<=x)
            {
                for(a=p,b=0;b<m;a--,b++)
                    ara[a][b]=s;
                p++;
                m++;
                s=s*2;
            }
            else
            {
                for(a=x-1,b=q;b<x;a--,b++)
                   ara[a][b]=s;
                q++;
                s=s*2;
            }
        }
        int d,g=0;
        d=s/2;
        while(d!=0)
        {
            d=d/10;
            g++;
        }
        for(i=0;i<x;i++)
        {
            for(j=0;j<x;j++)
            {
                if(j==x-1)
                   printf("%*ld",g,ara[i][j]);
                else
                   printf("%*ld ",g,ara[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

