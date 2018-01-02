#include<stdio.h>
#define PI 3.14159
int main()
{
    float A,B,C;
    float u,v,x,y,z;
    scanf("%f%f%f",&A,&B,&C);
    u=(1.0/2)*A*C;
    v=PI*C*C;
    x=(1.0/2)*(A+B)*C;
    y=B*B;
    z=A*B;
    printf("TRIANGULO: %.3f\n",u);
    printf("CIRCULO: %.3f\n",v);
    printf("TRAPEZIO: %.3f\n",x);
    printf("QUADRADO: %.3f\n",y);
    printf("RETANGULO: %.3f\n",z);
    return 0;
}
