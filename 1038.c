#include<stdio.h>
int main()
{
    int x,y;
    float i,ara[5]={4.00,4.50,5.00,2.00,1.50};
    scanf("%d%d",&x,&y);
    i=ara[x-1]*y;
    printf("Total: R$ %.2f\n",i);
    return 0;
}
