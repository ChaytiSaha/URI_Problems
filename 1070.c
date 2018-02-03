#include<stdio.h>
int main()
{
    int x,i=1;
    scanf("%d",&x);
    if(x%2==0)
        x=x+1;
    else
        x=x;
    while(i<=6)
    {
        printf("%d\n",x);
        x=x+2;
        i++;
    }
    return 0;
}
