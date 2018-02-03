#include<stdio.h>
int cnt;
int fibo (int);
int main()
{
    int t,a,m;
    scanf("%d",&t);
    while(t--)
    {
        cnt=0;
        scanf("%d",&a);
        m=fibo(a);
        printf("fib(%d) = %d calls = %d\n",a,cnt-1,m);
    }
    return 0;
}
int fibo (int a)
{
    cnt++;
    if(a==0)
        return 0;
    else if(a==1)
        return 1;
    else
        return fibo(a-1)+fibo(a-2);
}
