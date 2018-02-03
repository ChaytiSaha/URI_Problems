#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,i=0;
    cin>>x;
    int a[x],fin;
    double b[x],m=0.0;
    while(i<x)
    {
       cin>>a[i]>>b[i];
       i++;
    }
    for(i=0;i<x;i++)
    {
        if(m<b[i])
        {
            m=b[i];
            fin=a[i];
        }
    }
    if(m<8.0) cout<<"Minimum note not reached"<<endl;
    else cout<<fin<<endl;
    return 0;
}
