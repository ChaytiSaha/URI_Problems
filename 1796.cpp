#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i=1;
    cin>>n;
    int ok=0,notok=0,ans;
    while(i<=n)
    {
        cin>>ans;
        if(ans==0)ok++;
        else notok++;
        i++;
    }
    if(ok>notok) cout<<"Y"<<endl;
    else cout<<"N"<<endl;
    return 0;
}
