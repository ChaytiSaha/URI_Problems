#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=200,x,i;
    while(t)
    {
        cin>>t;
        for(i=1;i<=t;i++)
        {
            cin>>x;
            if(x%2)cout<<x*2-1<<endl;
            else cout<<x*2-2<<endl;;
        }
    }
    return 0;
}
