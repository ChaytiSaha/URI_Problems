#include<stdio.h>
int main()
{
    double ara[12][12],sum=0.0;
    int i,j,t=7,p=11;
    char s;
    scanf("%c",&s);
    for(i=0;i<=11;i++)
    {
        for(j=0;j<=11;j++)
        {
           scanf("%lf",&ara[i][j]);
           if(i>0&&i<=5&&j>=p)
                sum=sum+ara[i][j];
           else if(i>5&&i<11&&j>=t)
                sum=sum+ara[i][j];
        }
        if(i>0&&i<=5)
                p--;
        if(i>5&&i<=10)
                t++;
    }
    if(s=='S')
        printf("%.1lf\n",sum);
    else if(s=='M')
    {
        sum=sum/30.0;
        printf("%.1lf\n",sum);
    }
    return 0;
}


