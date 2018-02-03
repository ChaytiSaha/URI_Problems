#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,ara[5];
    for(i=0;i<5;i++)
        cin>>ara[i];
    if(ara[0]<ara[1] &&ara[1]<ara[2] &&ara[2]<ara[3] &&ara[3]<ara[4]) cout<<"C"<<endl;
    else if(ara[0]>ara[1] &&ara[1]>ara[2] &&ara[2]>ara[3] &&ara[3]>ara[4]) cout<<"D"<<endl;
    else cout<<"N"<<endl;
    return 0;
}




