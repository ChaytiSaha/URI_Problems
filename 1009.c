#include<stdio.h>
int main()
{
    char ara[50];
    double salary,sold,total;
    gets(ara);
    scanf("%lf%lf",&salary,&sold);
    total=salary+sold*.15;
    printf("TOTAL = R$ %.2f\n",total);
    return 0;
}
