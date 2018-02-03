#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,sum;
    long long i;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=(-1+sqrt(1+4*2*n))/2;
        i=sum;
        cout<<i<<endl;
    }
    return 0;
}

