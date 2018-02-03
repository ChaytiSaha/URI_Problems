#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i=0,x,tmp;
    cin>>x;
    while(x!=0)
    {
        tmp=x%10;
        x=x/10;
        cout<<tmp;
    }
    cout<<endl;
    return 0;
}
