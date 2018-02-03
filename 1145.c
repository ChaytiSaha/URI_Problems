#include<stdio.h>
int main()
{
    long long int i,x,y,m;
    scanf("%lld%lld",&x,&y);
    m=x;
    for(i=1;i<=y;)
    {
        m=x;
        while(m--)
        {
            if(m==0)
                printf("%lld",i++);
            else
                printf("%lld ",i++);
            if(i>y)
                break;
        }
        printf("\n");
        if(i>y)
            break;
    }
    return 0;
}
/*#include <stdio.h>
int main()
{
    int X,Y,z,a,b=0;
    scanf("%d%d", &X,&Y);
    for(a=1; a<=Y; a++)
    {
        b++;
        if(b==X) printf("%d",a);
        else printf("%d ", a);
        if(b==X)
        {
            b=0;
            printf("\n");
        }
    }
    return 0;
}*/
