#include<stdio.h>
int main()
{
    int ara[8]={61,71,11,21,32,19,27,31},x,i,s=0;
    scanf("%d",&x);
    for(i=0;i<8;i++)
    {
        if(x==ara[i])
            s++;
    }
    if(s==0)
        printf("DDD nao cadastrado\n");
    else
    {
        if(x==61)
            printf("Brasilia\n");
        else if(x==71)
            printf("Salvador\n");
        else if(x==11)
            printf("Sao Paulo\n");
        else if(x==21)
            printf("Rio de Janeiro\n");
        else if(x==32)
            printf("Juiz de Fora\n");
        else if(x==19)
            printf("Campinas\n");
        else if(x==27)
            printf("Vitoria\n");
        else
            printf("Belo Horizonte\n");
    }
    return 0;
}
