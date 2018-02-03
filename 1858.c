#include<stdio.h>
int main()
{
    int c,n,i=1,loc=1;
    scanf("%d",&n);
    int ara[n];
    while(i<=n)
        scanf("%d",&ara[i++]);
    i=2;
    c=ara[1];
    while(i<=n)
    {
        if(ara[i]<c){
           loc=i;
           c=ara[i];}
        i++;
    }
    printf("%d\n",loc);
    return 0;
}
