#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,div1,div2,div3,actual=0;
    cin>>a>>b>>c;
    div1=a/2;
    div2=b/3;
    div3=c/5;
    actual=min(div1,min(div2,div3));
    cout<<actual<<endl;
    return 0;
}

