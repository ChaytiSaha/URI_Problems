#include<stdio.h>
int N,a1,b,a2,d,a3,f,a4,h,a5,j,a6,l,a7,s9,k1,k2,k3,k4,k5,t1,t2,t3,t4;
double as;
int main()
{
    scanf("%lf",&as);
    N=(int)as;
    s9=((int)(as*100.0))%100;
    printf("NOTAS:\n");
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

    printf("%d nota(s) de R$ 100.00\n",a1);
    printf("%d nota(s) de R$ 50.00\n",a2);
    printf("%d nota(s) de R$ 20.00\n",a3);
    printf("%d nota(s) de R$ 10.00\n",a4);
    printf("%d nota(s) de R$ 5.00\n",a5);
    printf("%d nota(s) de R$ 2.00\n",a6);

    a7=l/1;

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",a7);

    k1=s9/50;
    t1=s9%50;

    k2=t1/25;
    t2=t1%25;

    k3=t2/10;
    t3=t2%10;

    k4=t3/5;
    t4=t3%5;

    k5=t4/1;

    printf("%d moeda(s) de R$ 0.50\n",k1);
    printf("%d moeda(s) de R$ 0.25\n",k2);
    printf("%d moeda(s) de R$ 0.10\n",k3);
    printf("%d moeda(s) de R$ 0.05\n",k4);
    printf("%d moeda(s) de R$ 0.01\n",k5);
    return 0;
}

