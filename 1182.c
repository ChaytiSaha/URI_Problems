#include<stdio.h>
int main()
{
    double ara[12][12],sum=0.0;
    int i,n,j;
    char s;
    scanf("%d",&n);
    getchar();
    scanf("%c",&s);
    for(i=0;i<=11;i++)
    {
        for(j=0;j<=11;j++){
           scanf("%lf",&ara[i][j]);
        if(j==n)
            sum=sum+ara[i][j];}
    }
    if(s=='S')
        printf("%.1lf\n",sum);
    else if(s=='M')
    {
        sum=sum/12.0;
        printf("%.1lf\n",sum);
    }
    return 0;
}

