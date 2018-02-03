#include<stdio.h>
int main()
{
    int x,al=0,gas=0,di=0;
    while(scanf("%d",&x)!=EOF)
    {
        if(x==4)
            break;
        else if(x==1)
            al++;
        else if(x==2)
            gas++;
        else if(x==3)
            di++;
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",al);
    printf("Gasolina: %d\n",gas);
    printf("Diesel: %d\n",di);
    return 0;
}
