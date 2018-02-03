

///not


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,j,i;
    char ch[102];
    while(gets(ch))
    {
        int cnt[200]={0},d=0;
        for(i=0;ch[i]!='\0';i++)
        {
            for(j=i+1;ch[j]!='\0';j++)
                if(ch[i]==ch[j] && ch[i]!='~'){
                   cnt[d]++;
                   ch[j]='~';
                }
            d++;
        }
        for(i=0;i<d;i++)
            cout<<cnt[i];
    }
    return 0;
}
