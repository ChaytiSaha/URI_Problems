#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,r,b,c,maximum;
        cin>>x>>y;
        r=(3*x)*(3*x)+(y*y);
        b=2*x*x+(5*y)*(5*y);
        c=(-100)*x+y*y*y;
        maximum = max(c,max(r,b));
        if (maximum == r) cout<<"Rafael ganhou"<<endl;
        else if (maximum == b) cout<<"Beto ganhou"<<endl;
        else if (maximum == c) cout<<"Carlos ganhou"<<endl;
    }
    return 0;
}
///The function that Rafael chose is r(x, y) = (3x)² + y².

///Beto chose the function b(x, y) = 2(x²) + (5y)².

///Carlos, however, chose the function c(x, y) = -100x + y³.
