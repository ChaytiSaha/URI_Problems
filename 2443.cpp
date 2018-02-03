#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, lcm, upor, div, dividend, divisor;
    cin>>a>>b>>c>>d;

    lcm=(b/__gcd(b,d))*d;

    upor=((lcm/b)*a)+((lcm/d)*c);

    div=__gcd(upor,lcm);

    dividend=upor/div;
    divisor=lcm/div;

    cout<<dividend<<" "<<divisor<<endl;
    return 0;
}
