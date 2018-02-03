#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ara[100000];
    int i,cnt,cn,c,what;
    while(gets(ara))
    {
        cnt=cn=c=what=0;
        for(i=0;ara[i]!='\0';i++)
        {
            if(ara[i]>='A' && ara[i]<='Z') cnt++;
            else if(ara[i]>='a' && ara[i]<='z') cn++;
            else if(ara[i]>='0' && ara[i]<='9') c++;
            else what++;
        }
        if(what>0 || (strlen(ara)<6 || strlen(ara)>32) || cnt==0 ||cn==0 ||c==0) cout<<"Senha invalida."<<endl;
        else cout<<"Senha valida."<<endl;
    }
    return 0;
}
