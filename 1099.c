#include<stdio.h>
int main()
{
    int x,y,n,i,sum,t=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&x,&y);
        sum=0;
        if(x>y)
        {
            t=x;
            x=y;
            y=t;
        }
        for(i=x+1;i<y;i++)
            if(i%2!=0)
               sum+=i;
        printf("%d\n",sum);
    }
    return 0;
}
