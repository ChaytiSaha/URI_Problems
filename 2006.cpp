#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,ara[5],i,loc=0;
    cin>>x;
    for(i=0;i<5;i++)
        cin>>ara[i];
    for(i=0;i<5;i++)
        if(ara[i]==x)
            loc++;
    cout<<loc<<endl;
    return 0;
}
