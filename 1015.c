#include<stdio.h>
#include<math.h>
int main()
{
    double x1,y1,x2,y2,s,sq;
    scanf("%lf%lf",&x1,&y1);
    scanf("%lf%lf",&x2,&y2);
    s=pow((x2-x1),2)+pow((y2-y1),2);
    sq=sqrt(s);
    printf("%.4lf\n",sq);
    return 0;
}
