#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1][n+1],i,j;
    for(i=0;i<n+1;i++)
        for(j=0;j<n+1;j++)
            cin>>a[i][j];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
             if(a[i][j]+a[i][j+1]+a[i+1][j]+a[i+1][j+1] < 2) cout<<"U";
             else cout<<"S";
        }
        cout<<endl;
    }
    return 0;
}
