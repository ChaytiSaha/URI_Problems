#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF)
    {
        if(a==b && b==c && c==a){ cout<<"*"<<endl; continue;}
        if(a==b) cout<<"C"<<endl;
        else if(b==c) cout<<"A"<<endl;
        else if(c==a) cout<<"B"<<endl;
    }
    return 0;
}
