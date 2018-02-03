#include<stdio.h>
int main()
{
    double x,a[2];
    int i=0;
    while(1)
    {
        scanf("%lf",&x);
        if(x<0||x>10.0)
            printf("nota invalida\n");
        else
            a[i++]=x;
        if(i>1)
            break;
    }
    printf("media = %.2lf\n",(a[0]+a[1])/2.0);
    return 0;
}

