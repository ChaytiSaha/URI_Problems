#include<stdio.h>
int main()
{
    int ara[10],num,i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&num);
        if(num==0||num<0) ara[i]=1;
        else ara[i]=num;
    }
    for(i=0;i<10;i++)
        printf("X[%d] = %d\n",i,ara[i]);
    return 0;
}
