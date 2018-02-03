#include <stdio.h>
#include <string.h>
int main()
{
   int i,j,k,l,n,m,T,a;
   char str[100],str1[100],str2[100];
   scanf("%d",&T);
   for(a=1;a<=T;a++)
   {
       scanf("%s",str);
       scanf("%s",str1);
       i = strlen(str);
       j = strlen(str1);
    if(i>=j)
    {
        for(k=0,l=0;k<2*j;k++,l++)
        {
            str2[k] = str[l];
            k++;
            str2[k] = str1[l];
        }
        for(k,n=j;n<i;k++,n++)
            str2[k] = str[n];
        str2[k] = '\0';
    }
    else
    {
        for(k=0,l=0;k<2*i;k++,l++)
        {
            str2[k] = str[l];
            k++;
            str2[k] = str1[l];
        }
        for(k,n=i;n<j;k++,n++)
            str2[k] = str1[n];
        str2[k] = '\0';
    }
    printf("%s\n",str2);
    }
    return 0;
}
