#include<stdio.h>
int main()
{
    int t,a;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&a);
        if(a%2!=0)
            printf("1\n");
        else
            printf("0\n");
    }
    return 0;
}
