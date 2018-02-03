#include<stdio.h>
int main()
{
    int t;
    while(scanf("%d",&t)!=EOF)
    {
        if(t==0) break;
        while(t--)
        {
            int a,i=1,r=0;
            char s;
            for(i=1;i<=5;i++)
            {
                scanf("%d",&a);
                if(a<=127){
                   r++;
                   if(i==1 && r==1)s='A';
                   if(i==2 && r==1)s='B';
                   if(i==3 && r==1)s='C';
                   if(i==4 && r==1)s='D';
                   if(i==5 && r==1)s='E';
                }
            }
            if(r>1 || r==0) printf("*\n");
            else printf("%c\n",s);
        }
    }
    return 0;
}
