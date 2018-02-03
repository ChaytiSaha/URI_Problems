#include<stdio.h>
int main()
{
    int n,min,loc=0;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            loc=i;
        }

    }
    printf("Menor valor: %d\n",min);
    printf("Posicao: %d\n",loc);
    return 0;
}
