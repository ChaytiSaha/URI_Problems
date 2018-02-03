#include<stdio.h>
int main()
{
    int n,i=1,l;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        l=0;
        scanf("%d",&l);
        if(l==0)
            printf("NULL\n");
        else if(l%2==0&&l<0)
            printf("EVEN NEGATIVE\n");
        else if(l%2==0&&l>0)
            printf("EVEN POSITIVE\n");
        else if(l%2!=0&&l<0)
            printf("ODD NEGATIVE\n");
        else if(l%2!=0&&l>0)
            printf("ODD POSITIVE\n");
    }
    return 0;
}
