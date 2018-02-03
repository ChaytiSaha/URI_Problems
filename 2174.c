#include<stdio.h>
#include<string.h>
int main()
{
    int t,i=0,sum=0,k;
    scanf("%d",&t);
    char ara[t][50];
    while(i<t)
        scanf(" %s",ara[i++]);
    for(i=0;i<t;i++)
    {
        for(k=i+1;k<t;k++)
        {
            if(strcmp(ara[i],ara[k])==0)
                strcpy(ara[k],"A");
        }
    }
    for(i=0;i<t;i++)
        if(strcmp(ara[i],"A")!=0)
           sum++;
    printf("Falta(m) %d pomekon(s).\n",151-sum);
    return 0;
}
