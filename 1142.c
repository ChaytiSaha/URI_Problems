#include<stdio.h>
int main()
{
    int n,b,i=1;
    scanf("%d",&n);
    while(n--)
    {
        b=4;
        while(b--)
        {
            if(b==0)
            {
                printf("PUM\n");
                i++;
            }
            else
                printf("%d ",i++);
        }
    }
    return 0;
}
