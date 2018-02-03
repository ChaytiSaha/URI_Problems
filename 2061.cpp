#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,num1=0,num2=0,num;
    cin>>m>>n;
    while(n--)
    {
        char c[10];
        cin>>c;
        if(c[0]=='f') num1++;
        if(c[0]=='c') num2++;
    }
    num=m+num1-num2;
    cout<<num<<endl;
    return 0;
}
