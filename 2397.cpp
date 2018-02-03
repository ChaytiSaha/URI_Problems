#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long mid,m,a,b,c,n;
    cin>>a>>b>>c;

    m=max(c,max(a,b));
    n=min(c,min(a,b));
    mid=a+b+c-m-n;

    if(n+mid<=m)cout<<"n"<<endl;

    else if(n*n + mid*mid <m*m) cout<<"o"<<endl;

    else if(n*n + mid*mid == m*m) cout<<"r"<<endl;

    else cout<<"a"<<endl;

    return 0;
}
