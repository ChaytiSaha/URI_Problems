#include<stdio.h>
int main()
{
    long long int l;
    scanf("%lld",&l);
    while(l--)
    {
        if(l!=0)
            printf("Ho ");
        else
            printf("Ho!\n");
    }
    return 0;
}
