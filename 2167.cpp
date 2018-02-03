#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,loc=0;
    cin>>t;
    long a[t],maw;
    for(int i=0;i<t;i++)
        cin>>a[i];
    maw=a[0];
    for(int i=1;i<t;i++)
    {
        if(a[i]<maw)
        {
            loc=i;
            break;
        }
        else maw=a[i];
    }
    if(loc==0)
    cout<<loc<<endl;
    else cout<<loc+1<<endl;
    return 0;
}
