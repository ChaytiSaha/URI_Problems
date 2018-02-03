#include<bits/stdc++.h>
using namespace std;
int main()
{
    int maximum,s,a,b,c;
    cin>>a>>b>>c;
    maximum=max(c,max(b,a));
    s=a+b+c-maximum;
    if(s<=maximum) cout<<"Invalido"<<endl;
    else
    {
        if(a==b&&b==c&&c==a) cout<<"Valido-Equilatero"<<endl;
        else if(a==b||b==c||c==a) cout<<"Valido-Isoceles"<<endl;
        else cout<<"Valido-Escaleno"<<endl;
        if((a+b+c)%4==0) cout<<"Retangulo: S"<<endl;
        else cout<<"Retangulo: N"<<endl;
    }
    return 0;
}
