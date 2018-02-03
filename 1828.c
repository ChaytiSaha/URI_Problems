#include<stdio.h>
int main()
{
    int t,i=1;
    scanf("%d",&t);
    while(i<=t)
    {
        char a[]="pedra",b[]="papel",c[]="tesoura",d[]="lagarto",e[]="Spock",m[10],n[10];
        scanf("%s %s",m,n);
        if(!strcmp(m,n))
            printf("Caso #%d: De novo!\n",i);
        else if(!strcmp(m,a))
        {
            if(!strcmp(n,c)||!strcmp(n,d))
                printf("Caso #%d: Bazinga!\n",i);
            else
                printf("Caso #%d: Raj trapaceou!\n",i);
        }
        else if(!strcmp(m,b))
        {
            if(!strcmp(n,a)||!strcmp(n,e))
                printf("Caso #%d: Bazinga!\n",i);
            else
                printf("Caso #%d: Raj trapaceou!\n",i);
        }
        else if(!strcmp(m,c))
        {
            if(!strcmp(n,b)||!strcmp(n,d))
                printf("Caso #%d: Bazinga!\n",i);
            else
                printf("Caso #%d: Raj trapaceou!\n",i);
        }
        else if(!strcmp(m,d))
        {
            if(!strcmp(n,b)||!strcmp(n,e))
                printf("Caso #%d: Bazinga!\n",i);
            else
                printf("Caso #%d: Raj trapaceou!\n",i);
        }
        else if(!strcmp(m,e))
        {
            if(!strcmp(n,a)||!strcmp(n,c))
                printf("Caso #%d: Bazinga!\n",i);
            else
                printf("Caso #%d: Raj trapaceou!\n",i);
        }
        i++;
    }
    return 0;
}
