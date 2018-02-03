#include<stdio.h>
int main()
{
    double a,b,c,A,B,C;
    scanf("%lf%lf%lf",&a,&b,&c);
    A=(a>b)?((a>c)?a:c):((b>c)?b:c);
    if(A==a)
        B=(b>c)?b:c;
    else if(A==b)
        B=(a>c)?a:c;
    else if(A==c)
        B=(a>b)?a:b;
    if((B==a&&A==b)||(B==b&&A==a))
        C=c;
    else if((B==c&&A==b)||(B==b&&A==c))
        C=a;
    else if((B==a&&A==c)||(B==c&&A==a))
        C=b;
    if (A >= B + C)
        printf("NAO FORMA TRIANGULO\n");
    else if( A*A == B*B + C*C)
        printf("TRIANGULO RETANGULO\n");
    else if(A*A > B*B + C*C)
        printf("TRIANGULO OBTUSANGULO\n");
    else if(A*A < B*B + C*C)
        printf("TRIANGULO ACUTANGULO\n");
    if(A==B&&B==C&&C==A)
        printf("TRIANGULO EQUILATERO\n");
    else if(A==B||B==C||C==A)
         printf("TRIANGULO ISOSCELES\n");
    return 0;
}
*/
#include<stdio.h>
int main()
{
    double a,b,c,d,e,f;
    scanf("%lf%lf%lf",&a,&b,&c);
    d=(a>b)?(a>c?a:c):(b>c?b:c);
    e=(a<b)?(a<c?a:c):(b<c?b:c);
    f=a+b+c-d-e;
    if (d >= e + f)
        printf("NAO FORMA TRIANGULO\n");
    else if( d*d == e*e + f*f)
        printf("TRIANGULO RETANGULO\n");
    else if(d*d > e*e + f*f)
        printf("TRIANGULO OBTUSANGULO\n");
    else if(d*d < e*e + f*f)
        printf("TRIANGULO ACUTANGULO\n");
    if(d==e&&e==f&&f==d)
        printf("TRIANGULO EQUILATERO\n");
    else if(d==e||e==f||f==d)
         printf("TRIANGULO ISOSCELES\n");
    return 0;
}
