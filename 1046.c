#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if(x==0&&y==0)
        printf("O JOGO DUROU 24 HORA(S)\n");
    else if(x<y)
        printf("O JOGO DUROU %d HORA(S)\n",y-x);
    else
        printf("O JOGO DUROU %d HORA(S)\n",(24-x)+y);
    return 0;
}
