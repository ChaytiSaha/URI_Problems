#include<stdio.h>
int main()
{
    char month[12][12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    int n,i=0;
    scanf("%d",&n);
    while(month[n-1][i]!='\0')
    {
         printf("%c",month[n-1][i]);
         i++;
    }
    printf("\n");
    return 0;
}
