#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ara[1002],str[1002];
    int len;
    while( cin>>ara)
    {
        int d=0,first=0,last=0;
        len=strlen(ara);
        for(int i=0;i<len;i++)
            if(ara[i]=='(' || ara[i]==')')
                str[d++]=ara[i];

        for(int i=0;i<d;i++)
        {
            if(str[i]=='(')
                first++;
            else{
                last++;
                if(first>0)
                {
                    first--;
                    last--;
                }
           }
        }
        if(first==0 && last==0)cout<<"correct"<<endl;
        else cout<<"incorrect"<<endl;
    }
    return 0;
}
