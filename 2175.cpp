#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,y,z;
    cin>>x>>y>>z;
    if(x==y || y==z || z==x)cout<<"Empate"<<endl;
    else if(x<y && x<z) cout<<"Otavio"<<endl;
    else if(y<x && y<z) cout<<"Bruno"<<endl;
    else if(z<x && z<y) cout<<"Ian"<<endl;
    return 0;
}
