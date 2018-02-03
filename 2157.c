#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,j,a,b,ara[50000],num,div;
        scanf("%d%d",&a,&b);
        for(i=0;a<=b;i++)
        {
            ara[i]=a;
            printf("%d",ara[i]);
            a++;
        }
        for(j=i-1;j>=0;j--)
        {
            div=num=ara[j];
            while(num)
            {
                div=num%10;
                num=num/10;
                printf("%d",div);
            }
        }
        printf("\n");
    }
    return 0;
}
