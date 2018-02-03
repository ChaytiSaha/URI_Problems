#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char str[1000];
    int i,j,k,n;
    while(gets(str) != NULL)
    {
        k = strlen(str);
        n=0;
        for (i=0;i<k;i++)
        {
           if(str[i] != ' ')
           {
               n++;
               if(n%2 != 0){
                   if(islower(str[i])) str[i]=toupper(str[i]);}
               else{
                   if(isupper(str[i])) str[i]=tolower(str[i]);}
           }
           printf("%c",str[i]);
        }
        printf("\n");
    }
}
