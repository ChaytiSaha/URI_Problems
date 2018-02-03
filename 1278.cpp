#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i=0,k=0;
    while(scanf("%d",&t)!=EOF&&t)
    {
       char c[t][50],d[t][50];
       int len[t],maximum,u;
       getchar();
       i=0;
       while(i<t)
       {
           cin>>c[i];
       }
           for(u=0;c[u];)
           {
               if(c[u]!=' '){ d[u]=c[u]; u++;}
               else if(c[u]==' ' && c[u+1]!=' ')
               {
                   for(;c[u+1]!=' ';)
                   d[u]=c[u+1];
                   u++;
               }
               else continue;
           }

       maximum=len[0];
       for(i=1;i<t;i++)
           if(maximum<len[i])
               maximum=len[i];

       if(k!=0) cout<<endl;
       for(i=0;i<t;i++)
           cout<<setw(maximum)<<c[i]<<endl;
       k++;
    }
    return 0;
}


