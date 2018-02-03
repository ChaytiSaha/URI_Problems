#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,dif;
    while(cin>>a>>b)
    {
        if(a>b) dif=a-b;
        else dif=b-a;
        cout<<dif<<endl;
    }
    return 0;
}
