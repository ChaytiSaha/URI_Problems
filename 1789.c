#include<stdio.h>
int main()
{
    int i,x;
    while(scanf("%d",&x)!=EOF)
    {
        int ara[x];
        int q=0,r=0;
        for(i=0;i<x;i++)
        {
            scanf("%d",&ara[i]);
            if(ara[i]>=10&&ara[i]<20)
                q++;
            else if(ara[i]>=20)
                r++;
        }
        if(r>0)
            printf("3\n");
        else if(q>0)
            printf("2\n");
        else
            printf("1\n");
    }
    return 0;
}
