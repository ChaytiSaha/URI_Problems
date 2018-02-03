#include<stdio.h>
int main()
{
    int x,n,c=0,r=0,s=0;
    double coe,rat,sap;
    scanf("%d",&n);
    char ara;
    while(n--)
    {
        scanf("%d %c",&x,&ara);
        if(ara=='C')
            c=c+x;
        else if(ara=='R')
            r=r+x;
        else if(ara=='S')
            s=s+x;
    }
    printf("Total: %d cobaias\n",c+r+s);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);
    coe=((double)c*100.0)/(double)(c+r+s);
    rat=((double)r*100.0)/(double)(c+r+s);
    sap=((double)s*100.0)/(double)(c+r+s);
    printf("Percentual de coelhos: %.2lf %%\n",coe);
    printf("Percentual de ratos: %.2lf %%\n",rat);
    printf("Percentual de sapos: %.2lf %%\n",sap);
    return 0;
}
