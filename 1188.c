#include<stdio.h>
int main()
{
    double ara[12][12],sum=0.0;
    int i,j,y=5,t=6;
    char s;
    scanf("%c",&s);
    for(i=0;i<=11;i++)
    {
        for(j=0;j<=11;j++){
           scanf("%lf",&ara[i][j]);
        if(j>=y&&j<=t&&i>=7)
            sum=sum+ara[i][j];}
        if(i>=7){
            y--;
            t++;}
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
