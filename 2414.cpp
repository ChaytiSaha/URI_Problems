#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,ma=-99;
    while(cin>>t)
    {
        if(t==0) break;
        if(ma<t) ma=t;
    }
    cout<<ma<<endl;
    return 0;
}


