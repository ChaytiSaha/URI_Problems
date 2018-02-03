#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    double m,n,x;
    while(scanf("%ld%ld%ld",&a,&b,&c)!=EOF)
    {
        x=(double)sqrt(144+(a*a));
        m=12.0/(double)b;
        n=x/(double)c;
        if(m>=n) cout<<"S"<<endl;
        else cout<<"N"<<endl;
    }
    return 0;
}



