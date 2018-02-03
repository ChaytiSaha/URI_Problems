#include<stdio.h>
int main()
{
    int i=1,j=7,m=7,r,u=3;
    for(r=1;r<=5;r++)
    {
        m=j;
        while(u--)
        {
            printf("I=%d J=%d\n",i,j);
            j--;
        }
        i=i+2;
        j=m+2;
        u=3;
    }
    return 0;
}

