#include<stdio.h>
int main()
{
    int x,r,sum;
    while(1)
    {
        scanf("%d",&x);
        if(x==0) break;
        r=0;
        sum=0;
        while(r<5){
            if(x%2==0)
            {
                sum=sum+x;
                r++;
            }
            x++;}
        printf("%d\n",sum);
    }
    return 0;
}
