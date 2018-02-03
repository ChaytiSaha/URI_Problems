#include <stdio.h>
#include <string.h>
int main ()
{
    char str[1000],str3[2000],str4[1000];
    int i,m,p,q,o,w,T;
    scanf("%d",&T);
    getchar();
    while(T--)
    {
        gets(str);
        i = strlen(str);
        m = i/2;
        o=0;
        for(p=m-1;p>=0;p--)
            str3[o++] = str[p];

        str3[o] = '\0';
        w=0;
        for(q=i-1;q>=m;q--)
        str4[w++] = str[q];

        str4[w] = '\0';
        strcat(str3,str4);
        printf("%s\n",str3);
    }
}
