#include<stdio.h>
int main()
{
    int x,sec,min,flo,hour;
    scanf("%d",&x);
    hour=(int)(((float)(x)/60.0)/60.0);
    min=((int)((float)(x)/60.0)%60);
    flo=x%60;
    printf("%d:%d:%d\n",(int)hour,min,flo);
    return 0;
}

