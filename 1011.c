#include<stdio.h>
#define PI 3.14159
int main()
{
    double R,y;
    scanf("%lf",&R);
    y=(4.0/3)*PI*R*R*R;
    printf("VOLUME = %.3lf\n",y);
    return 0;
}
