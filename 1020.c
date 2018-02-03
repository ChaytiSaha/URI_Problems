#include<stdio.h>
int main()
{
    int x,month,day,year;
    scanf("%d",&x);
    year=x/365;
    if(x>365)
        month=(x-365*year)/30;
    else
        month=x/30;
    day=x-((year*365)+(month*30));
    printf("%d ano(s)\n",year);
    printf("%d mes(es)\n",month);
    printf("%d dia(s)\n",day);
    return 0;
}

