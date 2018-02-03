#include<stdio.h>
int main()
{
    int a,b,r=0,m,i;
    scanf("%d",&a);
        m=a;
    while(1)
    {
        scanf("%d",&b);
        if(b<a||b==a) continue;
        else
        {
            for(i=0;i<=b;a++)
            {
                i=i+a;
                r++;
            }
        }
        if(b>m) break;
    }
    printf("%d\n",r);
}
