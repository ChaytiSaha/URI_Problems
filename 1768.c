

 ///this is accepted format.

  #include<stdio.h>
    int main()
    {
        int i,t,j,p,k, l;
        while(scanf("%d",&t)!=EOF)
        {
           p=0;k=1;
           p = t/2;
           for(i=1;k<=t;i++)
           {
               for(j=1;j<=p;j++) printf(" ");

               for(j=1;j<=k;j++) printf("*");

               k=k+2;p=p-1;
               printf("\n");
           }
           k=1;p = t/2;
           for(i=1, l=1;i<=2;i++)
           {
               for(j=1;j<=p;j++) printf(" ");

               for(k=1; k<=l; k++) printf("*");

               printf("\n");
               p--; l+=2;
           }
           printf("\n");
        }
        return 0;
    }

/*

eita vhul formet. because even r belay ekta space proti line e besi hbe.

#include<stdio.h>
int main()
{
    int i,t,j,p,k;
    while(scanf("%d",&t)!=EOF)
    {
       p=0;k=1;
       for(i=1;i<=t;i=i+2) p++;
       for(i=1;k<=t;i++)
       {
           for(j=1;j<p;j++) printf(" ");

           for(j=1;j<=k;j++) printf("*");

           k=k+2;p=p-1;
           printf("\n");
       }
       p=0;k=1;
       for(i=1;i<=t;i=i+2) p++;
       for(i=1;k<=3;i++)
       {
           for(j=1;j<p;j++) printf(" ");

           for(j=1;j<=k;j++) printf("*");

           k=k+2;p=p-1;
           printf("\n");
       }
       printf("\n");
    }
    return 0;
}*/


