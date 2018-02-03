#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int l1,l2,d1,d2;
    cin>>l1>>l2;
    cin>>d1>>d2;
    if((n>=l1 && n<=l2) && (n>=d1 && n<=d2)) cout<<"possivel"<<endl;
    else cout<<"impossivel"<<endl;
    return 0;
}
