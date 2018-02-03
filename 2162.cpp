#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i=0,no=0;
    cin>>t;
    int ara[t];
    while(i<t)
        cin>>ara[i++];
    if(t==2&&ara[0]==ara[1])no++;
    else{
    for(i=2;i<t;i++)
    {
        if(ara[i-2]<=ara[i-1]&&ara[i-1]<=ara[i])
            no++;
        else if(ara[i-2]>=ara[i-1]&&ara[i-1]>=ara[i])
            no++;
    }
    }
    if(no>0) cout<<0<<endl;
    else cout<<1<<endl;
    return 0;
}
