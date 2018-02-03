

///not


#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  x,i;
    double df;
    cin>>x;
    df=sqrt((double)x);
    i=df;
    if(x>5){
    if(x%2==0 && i!=df)cout<<"S"<<endl;
    else cout<<"N"<<endl;
    return 0;
    }
    else cout<<"N"<<endl;
    return 0;
}
