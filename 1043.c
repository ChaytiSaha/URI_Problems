#include<stdio.h>
int main()
{
    double a,b,c,m,s1,p;
    scanf("%lf%lf%lf",&a,&b,&c);
    m=(a<b)?((a<c)?a:c):((b<c)?b:c);
    if(m==a)
        s1=(b<c)?b:c;
    else if(m==b)
        s1=(a<c)?a:c;
    else if(m==c)
        s1=(a<b)?a:b;
    if((m+s1)==(a+b))
    {
        if((a+b)>c)
        {
            p=a+b+c;
            printf("Perimetro = %.1lf\n",p);
        }
        else
        {
            p=0.5*(a+b)*c;
            printf("Area = %.1lf\n",p);
        }

    }
    else if((m+s1)==(a+c))
    {
        if((a+c)>b)
        {
            p=a+b+c;
            printf("Perimetro = %.1lf\n",p);
        }
        else
        {
            p=0.5*(a+b)*c;
            printf("Area = %.1lf\n",p);
        }
    }
    else if((m+s1)==(b+c))
    {
        if((b+c)>a)
        {
            p=a+b+c;
            printf("Perimetro = %.1lf\n",p);
        }
        else
        {
            p=0.5*(a+b)*c;
            printf("Area = %.1lf\n",p);
        }
    }
    return 0;
}
