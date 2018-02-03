
///accepted

#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    long long power,a,t,result;
    cin>>a;
    while(a--)
    {
        cin>>t;
        if(t%2!=0) result=9;
        else result=1;
        cout<<result<<endl;
    }
    return 0;
}
