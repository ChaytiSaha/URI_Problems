#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,i,sum=0;
    cin>>x;
    int ara[x];
    for(i=0;i<x;i++)
        cin>>ara[i];
    for(i=0;i<x;i++)
        sum+=ara[i];
    cout<<x<<" "<<sum-x<<endl;
    return 0;
}
