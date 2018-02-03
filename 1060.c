#include<stdio.h>
int main()
{
    int i,t=0;
    float x;
    for(i=1;i<=6;i++)
    {
        scanf("%f",&x);
        if(x>0)
            t++;
    }
    printf("%d valores positivos\n",t);
    return 0;
}
