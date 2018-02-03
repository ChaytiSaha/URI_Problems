#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,m,n,sum,x,total=0;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        sum=0;
        for(j=1;j<=m;j++)
        {
            cin>>x;
            if(x>0) sum++;
        }
        if(sum==m)total++;
    }
    cout<<total<<endl;
    return 0;
}
