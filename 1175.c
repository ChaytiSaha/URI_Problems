#include<stdio.h>
int main()
{
    int n[20],r=0,i;
    for(i=0;i<20;i++)
        scanf("%d",&n[i]);
    for(i=19;i>=0;i--)
        printf("N[%d] = %d\n",r++,n[i]);
    return 0;
}
