#include<stdio.h>
int main()
{
    int i,x,l,m=0,n=0;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        l=0;
        scanf("%d",&l);
        if(l>=10&&l<=20)
            m++;
        else
            n++;
    }
    printf("%d in\n",m);
    printf("%d out\n",n);
    return 0;
}
