#include<stdio.h>
int main()
{
    int x,a,y,b,h,m;
    scanf("%d%d%d%d",&x,&a,&y,&b);
    if(x==0&&y==0)
        h=24;
    else if(x<y)
        h=y-x;
    else
        h=(24-x)+y;
    if(a==b)
        m=0;
    else if(a<b)
        m=b-a;
    else
        m=(60-a)+b;
    if(m!=0&&a>b)
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h-1,m);
    else
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    return 0;
}

