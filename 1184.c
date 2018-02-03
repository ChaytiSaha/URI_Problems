#include<stdio.h>
int main()
{
    double ara[12][12],sum=0.0;
    int i,j;
    char s;
    scanf("%c",&s);
    for(i=0;i<=11;i++)
    {
        for(j=0;j<=11;j++){
           scanf("%lf",&ara[i][j]);
        if(j<i)
            sum=sum+ara[i][j];}
    }
    if(s=='S')
        printf("%.1lf\n",sum);
    else if(s=='M')
    {
        sum=sum/66.0;
        printf("%.1lf\n",sum);
    }
    return 0;
}


