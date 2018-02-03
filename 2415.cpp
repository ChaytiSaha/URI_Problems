#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,r=0ll,k=1ll,i;
    cin>>t;
    int ara[t];
    for(i=0ll;i<t;i++)
        cin>>ara[i];
    for(i=1ll;i<t;i++)
    {
        if(ara[i]==ara[i-1]) k++;
        else k=1ll;
        r=max(r,k);
    }
    cout<<r<<endl;
    return 0;
}

