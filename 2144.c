#include<stdio.h>
int main()
{
    int w1,w2,r;
    double tot=0.0,value;
    while(scanf("%d%d%d",&w1,&w2,&r)!=EOF)
    {
        if(w1==0 && w2==0 && r==0) break;
        value=((w1/2.0)+(w2/2.0))*(1.0+(r/30.0));
        tot+=value;
        if(value>60.0) printf("AQUI E BODYBUILDER!!\n");
        else if(value>40.0) printf("Ta saindo da jaula o monstro!\n");
        else if(value>14.0) printf("Bora, hora do show! BIIR!\n");
        else if(value>13.0) printf("E 13\n");
        else if(value>1.0) printf("Nao vai da nao\n");
    }
    if(tot>40.0) printf("\nAqui nois constroi fibra rapaz! Nao e agua com musculo!\n");
    return 0;
}
