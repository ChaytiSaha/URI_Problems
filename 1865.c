#include<stdio.h>
int main()
{
    int x,t;
    char c[]="Thor",d[50];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s%d",d,&x);
        if(!strcmp(c,d))
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
