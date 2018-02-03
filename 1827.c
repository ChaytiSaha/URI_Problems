#include<stdio.h>
int main()
{
    int x;
    while(scanf("%d",&x)!=EOF)
    {
        int m,i,j,s,n,t;
        m=x/3;
        n=x-m-1;
        s=x-1;
        t=m-1;
        int ara[x][x];
        for(i=0;i<x;i++)
        {
            for(j=0;j<x;j++)
            {
                if((i>=m&&i<=n)&&(j>=m&&j<=n))ara[i][j]=1;
                else if(j==i) ara[i][j]=2;
                else if(i<m&&j>n&&j==s){ ara[i][j]=3;
                  s--;}
                else if(i>n&&j<m&&j==t){ara[i][j]=3;
                  t--;}
                else ara[i][j]=0;
            }
            ara[x/2][x/2]=4;
        }
        for(i=0;i<x;i++)
        {
            for(j=0;j<x;j++)
                printf("%d",ara[i][j]);
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
