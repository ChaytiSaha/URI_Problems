#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,sum=0,a,b;
    cin>>n;
    int ara[n+1][n+1],aray[n*2+1];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
            cin>>ara[i][j];
    }
    for(i=1;i<=n*2;i++)
    {
        cin>>a>>b;
        aray[i]=ara[a][b];
    }
    for(i=1;i<=n*2;i++)
    {
        for(j=i+1;j<=n*2;j++)
        {
            if(aray[i]==aray[j])
                aray[i]=-111;
        }
    }
    for(i=1;i<=n*2;i++)
    {
        if(aray[i]>0)
            sum++;
    }
    cout<<sum<<endl;
    return 0;
}
