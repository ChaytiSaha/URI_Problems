#include<stdio.h>
int main()
{
    double i=2.0,s=1.0,m=1;
    while(1)
    {
        m=m+2.0;
        s=s+m/i;
        i=2*i;
        if(m==39) break;
    }
    printf("%.2lf\n",s);
    return 0;
}

