#include<stdio.h>
int main()
{
    int x;
    while(1)
    {
        scanf("%d",&x);
        if(x==0) break;
        int ara[x][x],m,n,r=1,i,a,b,j,p=0,q=1;
        m=x%2;
        n=x/2;
        for(i=1;i<=n;i++,p++,r++,q++)
        {
            for(a=p,b=p;b<x-p;b++)
                ara[a][b]=r;
            for(a=q,b=x-q;a<x-p;a++)
                ara[a][b]=r;
            for(a=x-q,b=p;b<x-q;b++)
                ara[a][b]=r;
            for(a=q,b=p;a<x-q;a++)
                ara[a][b]=r;
        }
        if(m!=0)
            ara[n][n]=r;
        for(i=0;i<x;i++)
        {
            for(j=0;j<x;j++)
            {
                if(j==x-1)
                   printf("%3d",ara[i][j]);
                else
                   printf("%3d ",ara[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
/*
#include <stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j=1,N,p=0,q=0,r;
    while(1)
    {
        scanf("%d", &N);
        if(N==0) break;
        else
        {
            j=1;p=0;q=0;
            int ara[N][N];
            i=N;
            if(N%2==0)
                r=N/2;
            else if(N%2==1)
                r=(N/2)+1;
            for(c=1; c<=r; c++)
            {
                for(a=p; a<i; a++)
                {
                    for(b=q; b<i; b++)
                        ara[a][b]=j;
                }
                j++;
                p++; q++; i--;
            }
            for(g=0; g<N; g++)
            {
                for(h=0; h<N; h++)
                {
                    if(h==0)
                        printf("%3d",ara[g][h]);
                    else printf(" %3d",ara[g][h]);
                }
                printf("\n");
            }
            printf("\n");
        }
    }
    return 0;
}
*/
