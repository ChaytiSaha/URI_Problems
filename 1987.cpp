#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int a,b,i=0ll,sum=0ll;
    while(scanf("%ld%ld",&a,&b)!=EOF)
    {
    while(b!=0ll)
    {
        sum=sum+b%10ll;
        b=b/10ll;
    }
    if(sum%3ll==0ll)cout<<sum<<" sim"<<endl;
    else cout<<sum<<" nao"<<endl;
    }
    return 0;
}
