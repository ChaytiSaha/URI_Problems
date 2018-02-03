#include<stdio.h>
int main()
{
    int x,y,t,r,sum;
    scanf("%d",&t);
    while(t--)
    {
        r=0;
        sum=0;
        scanf("%d%d",&x,&y);
        while(1){
            if(x%2!=0)
            {
                sum=sum+x;
                r++;
            }
            x++;
            if(r==y) break;}
        printf("%d\n",sum);
    }
    return 0;
}
