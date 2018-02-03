#include<stdio.h>
int main()
{
    int t,x;
    while(1)
    {
        scanf("%d",&x);
        if(x==0)
            break;
        int ara[x][x],p,m,i,j;
        for(i=0;i<x;i++)
        {
            p=i+1;m=2;
            for(j=0;j<x;j++)
            {
                if(j<=i)
                {
                   ara[i][j]=p;
                   if(j==0)
                        printf("%3d",ara[i][j]);
                   else
                   printf(" %3d",ara[i][j]);
                   p--;
                }
                else
                {
                   ara[i][j]=m;
                   printf(" %3d",ara[i][j]);
                   m++;
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

