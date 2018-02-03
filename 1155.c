#include<stdio.h>
int main()
{
    double i=2.0,s=1.0;
    while(i<=100.0)
    {
        s=s+1/i;
        i++;
    }
    printf("%.2lf\n",s);
    return 0;
}
