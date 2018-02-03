int fibo(int r);
#include<stdio.h>
int main()
{
    int a,n;
    scanf("%d",&n);
    printf("%d ",0);
    for(a=1;a<n;a++)
    {
        if(a==n-1)
            printf("%d\n",fibo(a));
        else
            printf("%d ",fibo(a));
    }
    return 0;
}
int fibo(int i)
{
    if(i==1||i==2)
        return 1;
    else
        return fibo(i-1)+fibo(i-2);
}
