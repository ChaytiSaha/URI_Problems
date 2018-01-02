#include<stdio.h>
int main()
{
    int a,b,c,d;
    float e,f,price;
    scanf("%d%d%f",&a,&b,&e);
    scanf("%d%d%f",&c,&d,&f);
    price=(float)b*e+(float)d*f;
    printf("VALOR A PAGAR: R$ %.2f\n",price);
    return 0;
}

