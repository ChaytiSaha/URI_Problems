#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mid,n,m,a,b,c;
    cin>>a>>b>>c;
    m=max(a,max(b,c));
    n=min(a,min(b,c));
    mid=a+b+c-m-n;
    cout<<mid<<endl;
    return 0;
}
