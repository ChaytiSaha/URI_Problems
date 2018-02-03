#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int ara[n],i,r=0;
        double sum=0.0,tot=0.0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&ara[i]);
            sum+=ara[i];
        }
        sum=sum/n;
        for(i=0;i<n;i++)
        {
            if(ara[i]>sum)
                r++;
        }
        tot=((double)r/n)*100.0;
        printf("%.3lf%%\n",tot);
    }
    return 0;
}
