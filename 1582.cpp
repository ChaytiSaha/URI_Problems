#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z;
    while(cin>>x>>y>>z)
    {
        if(((x*x)==(y*y)+(z*z)) || ((y*y)==(x*x)+(z*z)) || ((z*z)==(y*y)+(x*x)))
            if((__gcd(z,__gcd(x,y))) == 1) cout<<"tripla pitagorica primitiva"<<endl;
            else cout<<"tripla pitagorica"<<endl;

        else cout<<"tripla"<<endl;
    }
    return 0;
}
