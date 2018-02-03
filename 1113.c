#include<stdio.h>
int main()
{
    int x,y;
    while(scanf("%d%d",&x,&y)!=EOF&&x!=y)
    {
        if(x>y)
            printf("Decrescente\n");
        else
            printf("Crescente\n");
    }
    return 0;
}
