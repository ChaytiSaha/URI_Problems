#include<stdio.h>
int main()
{
    int a,b,c,A,B,C;
    scanf("%d%d%d",&a,&b,&c);
    A=(a>b)?((a>c)?a:c):((b>c)?b:c);
    if(A==a)
        B=(b>c)?b:c;
    else if(A==b)
        B=(a>c)?a:c;
    else if(A==c)
        B=(a>b)?a:b;
    if((B==a&&A==b)||(B==b&&A==a))
        C=c;
    else if((B==c&&A==b)||(B==b&&A==c))
        C=a;
    else if((B==a&&A==c)||(B==c&&A==a))
        C=b;
    printf("%d\n",C);
    printf("%d\n",B);
    printf("%d\n\n",A);
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    return 0;
}
