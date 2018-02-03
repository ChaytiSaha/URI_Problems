#include<stdio.h>
int main()
{
    int ara[10],i;
    for(i=0;i<10;i++)
    {
        if(i==0) scanf("%d",&ara[i]);
        else
        ara[i]=ara[i-1]*2;
    }
    for(i=0;i<10;i++)
        printf("N[%d] = %d\n",i,ara[i]);
    return 0;
}
