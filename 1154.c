#include<stdio.h>
int main()
{
    int x,r=0,sum=0;
    while(1)
    {
        scanf("%d",&x);
        if(x<0) break;
        else
        {
            sum=sum+x;
            r++;
        }
    }
    printf("%.2lf\n",(double)sum/r);
    return 0;
}
