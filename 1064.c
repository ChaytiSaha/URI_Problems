#include<stdio.h>
int main()
{
    float x,sum=0.0,avg;
    int i,p=0;
    for(i=1;i<=6;i++)
    {
        x=0.0;
        scanf("%f",&x);
        if(x>0)
        {
            p++;
            sum=sum+x;
        }

    }
    avg=sum/(float)p;
    printf("%d valores positivos\n",p);
    printf("%.1f\n",avg);
    return 0;
}
