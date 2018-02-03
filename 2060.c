#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int i,ara[t],two=0,three=0,four=0,five=0;
    for(i=0;i<t;i++)
        scanf("%d",&ara[i]);
    for(i=0;i<t;i++)
    {
        if(ara[i]%2==0) two++;
        if(ara[i]%3==0) three++;
        if(ara[i]%4==0) four++;
        if(ara[i]%5==0) five++;
    }
    printf("%d Multiplo(s) de 2\n",two);
    printf("%d Multiplo(s) de 3\n",three);
    printf("%d Multiplo(s) de 4\n",four);
    printf("%d Multiplo(s) de 5\n",five);
    return 0;
}
