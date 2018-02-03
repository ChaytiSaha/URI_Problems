#include<stdio.h>
int main()
{
    float j=1.0,r,m;
    int u=3;
    for(r=0.0;r<2.1;r=r+.2)// 1
    {
        m=j;
        while(u--)
        {
            if(r==0.0||r==1.0||r>1.9)//  2
               printf("I=%.0f J=%.0f\n",r,j);// 3
            else
               printf("I=%.1f J=%.1f\n",r,j);
            j++;
        }
        j=m+.2;
        u=3;
    }
    return 0;
}
/*#include<stdio.h>
int main()
{
    float j=1.0,r=0.0,m,x;
    int u=3;
    for(x=1.0;x<=11.0;x++)
    {
        m=j;
        while(u--)
        {
            if(x==1.0||x==6.0||x==11.0)
               printf("I=%.0f J=%.0f\n",r,j);
            else
               printf("I=%.1f J=%.1f\n",r,j);
            j++;
        }
        j=m+.2;
        u=3;
        r=r+.2;
    }
    return 0;
}
*/



