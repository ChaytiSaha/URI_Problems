#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a;
    cin>>t;
    while(t--)
    {
        cin>>a;
        if(a%2!=0) cout<<a/2+1<<endl;
        else cout<<a/2<<endl;
    }
    return 0;
}
