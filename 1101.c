#include<stdio.h>
int main()
{
    int x,y,t,i,sum;
    while(scanf("%d%d",&x,&y)!=EOF&&x>0&&y>0)
    {
        if(x>y)
        {
            t=x;
            x=y;
            y=t;
        }
        sum=0;
        for(i=x;i<=y;i++)
        {
            printf("%d ",i);
            sum=sum+i;
        }
        printf("Sum=%d\n",sum);
    }
    return 0;
}
