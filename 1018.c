#include<stdio.h>
int N,a1,b,a2,d,a3,f,a4,h,a5,j,a6,l,a7;
int main()
{
    scanf("%d",&N);
    printf("%d\n",N);
    a1=N/100;
    b=N%100;

    a2=b/50;
    d=b%50;

    a3=d/20;
    f=d%20;

    a4=f/10;
    h=f%10;

    a5=h/5;
    j=h%5;

    a6=j/2;
    l=j%2;

    a7=l/1;
    printf("%d nota(s) de R$ 100,00\n",a1);
    printf("%d nota(s) de R$ 50,00\n",a2);
    printf("%d nota(s) de R$ 20,00\n",a3);
    printf("%d nota(s) de R$ 10,00\n",a4);
    printf("%d nota(s) de R$ 5,00\n",a5);
    printf("%d nota(s) de R$ 2,00\n",a6);
    printf("%d nota(s) de R$ 1,00\n",a7);
    return 0;
}
