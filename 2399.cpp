#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int x[n+1],a[n+1];
    for(i=1;i<=n;i++)
        cin>>x[i], a[i]=x[i];
    for(i=1;i<=n;i++)
    {
        if(i==1)
            if(x[i+1]==1)a[i]=a[i]+1;
        if(i==n)
            if(x[i-1]==1)a[i]=a[i]+1;
        if(i>1 && i<n)
        {
            if(x[i-1]==1)a[i]=a[i]+1;
            if(x[i+1]==1)a[i]=a[i]+1;
        }
    }
    for(i=1;i<=n;i++)
        cout<<a[i]<<endl;
    return 0;
}
