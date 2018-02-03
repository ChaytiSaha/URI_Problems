#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[10000],str1[10000];
    int i,j,k,l,n,m,count,T;
    scanf("%d",&T);
    while(T--)
    {
        cin>>str>>str1;
        i = strlen(str);
        j= strlen(str1);
        if(j>i) cout<<"nao encaixa"<<endl;
        else
         {
             k = i-j;
             for(n=k,count =0,m=0;n<i;n++)
                 if(str[n]==str1[m++])
                    count++;

             if(count== j) cout<<"encaixa"<<endl;
             else cout<<"nao encaixa"<<endl;
         }
    }
}
