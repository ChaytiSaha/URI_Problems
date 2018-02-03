#include <bits/stdc++.h>
using namespace std;
int main()
{
    int c,t;
    double q,amount = 0.00;
    cin>>t;
    while(t--)
    {
        cin>>c>>q;
        if(c==1001) amount +=q*1.50;
        else if(c==1002) amount +=q*2.50;
        else if(c==1003) amount +=q*3.50;
        else if(c==1004) amount +=q*4.50;
        else if(c==1005) amount +=q*5.50;
    }
    printf("%.2lf\n",amount);
    return 0;
}
