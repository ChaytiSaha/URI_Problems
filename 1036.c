#include <stdio.h>
#include <math.h>
 int main()
 {
    double a,b,c,d,root1,root2;
    scanf("%lf %lf %lf",&a, &b, &c);
    d= b*b-4*a*c;
    if(d>0&&a>0)
    {
        root1 = (-b+sqrt(d))/(2*a);
        root2 = (-b-sqrt(d))/(2*a);
        printf("R1 = %.5lf\n",root1);
        printf("R2 = %.5lf\n",root2);
    }
    else if (d==0&&a!=0)
    {
         root1 = root2 = -b/(2*a);
         printf("R1 = %.5lf\n", root1);
         printf("R2 = %.5lf\n", root2);
    }
    else
        printf("Impossivel calcular\n");
    return 0;
}
