#include<stdio.h>
int main()
{
    int x=2002,t;
    while(scanf("%d",&t)!=EOF)
    {
        if(t!=x)
            printf("Senha Invalida\n");
        else if(t==x)
        {
            printf("Acesso Permitido\n");
            break;
        }
    }
    return 0;
}
