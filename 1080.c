#include<stdio.h>
int i,ara[101],max,loc;
int main()
{
    for(i=1;i<=100;i++)
        scanf("%d",&ara[i]);
    max=ara[1];
    for(i=2;i<=100;i++)
    {
        if(max<ara[i])
        {
            max=ara[i];
            loc=i;
        }
    }
    printf("%d\n%d\n",max,loc);
    return 0;
}
