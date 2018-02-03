#include<stdio.h>
int main()
{
    long int i,n;
    scanf("%ld",&n);
    for(i=1;i<=10;i++)
        printf("%ld x %ld = %ld\n",i,n,i*n);
    return 0;
}
