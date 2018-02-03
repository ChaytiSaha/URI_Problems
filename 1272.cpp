#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    getchar();// fflush(stdin) is not accepted in uri
    while(t--)
    {
        char a[100],b[100]={'\0'};
        gets(a);
        int i,a1,j=0;
        a1=strlen(a);
        for(i=0;i<a1;i++)
        {
            if(i==0 && a[i]!=' ') b[j++]=a[i];
            else if(a[i]==' ' && a[i+1]!=' ') b[j++]=a[i+1];
            else continue;
        }
        b[j]='\0';
        puts(b);
    }
    return 0;
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000],str1[1000];
    int i,j,k,l,n;
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        gets(str);
        j = strlen(str);
        k=0;
        for(i=0;i<j;i++)
        {
           if(i == 0 && str[0]!=' ') str1[k++] = str[0];
           if(str[i]==' ' && str[i+1] == ' ') continue;
           if(str[i]==' ' && str[i+1] != ' ') str1[k++] = str[i+1];
        }
        str1[k] = '\0';
        printf("%s\n",str1);
    }
}
*/
