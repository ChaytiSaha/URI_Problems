#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a;
    cin>>t;
    while(t--)
    {
        cin>>a;
        if(a>2015) cout<<(a-2015)+1<<" A.C."<<endl;
        else if(a<2015) cout<<2015-a<<" D.C."<<endl;
        else cout<<1<<" A.C."<<endl;
    }
    return 0;
}
