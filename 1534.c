#include<stdio.h>
int main()
{
    int x;
    while(scanf("%d",&x)!=EOF)
    {
        int ara[x][x];
        int i,j,k;
        k=x-1;
        for(i=0;i<x;i++,k--)
        {
            for(j=0;j<x;j++)
            {
                if(j==i) ara[i][j]=1;
                else if(j==k) ara[i][j]=2;
                else ara[i][j]=3;
                if(x%2!=0)ara[x/2][x/2]=2;
            }
        }
        for(i=0;i<x;i++)
        {
            for(j=0;j<x;j++)
                printf("%d",ara[i][j]);
            printf("\n");
        }
    }
    return 0;
}
