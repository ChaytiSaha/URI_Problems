#include<stdio.h>
int main()
{
    int a,b,c,e,f,g,h;
    while(1)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a==0||b==0||c==0) break;
        e=(a*b*100)/c;
        f=sqrt(e);
        printf("%d\n",f);
    }
    return 0;
}
