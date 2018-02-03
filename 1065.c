#include<stdio.h>
int main()
{
    int x,e=0,t=5;
    while(t--)
    {
        scanf("%d",&x);
        if(x%2==0)
            e++;
    }
    printf("%d valores pares\n",e);
    return 0;
}
