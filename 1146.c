#include<stdio.h>
int main()
{
    long int i,n;
    while(scanf("%ld",&n)!=EOF&&n!=0)
    {
        for(i=1;i<=n;i++)
        {
            if(i==n)
                printf("%ld",i);
            else
                printf("%ld ",i);
        }
        printf("\n");
    }
    return 0;
}
