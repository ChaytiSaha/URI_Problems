#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    char a[10],b[10],p[10]="ataque",q[10]="pedra",r[10]="papel";
    while(t--)
    {
        cin>>a;
        cin>>b;
        if(strcmp(a,p)==0&&strcmp(b,p)==0) cout<<"Aniquilacao mutua"<<endl;
        else if(strcmp(a,q)==0&&strcmp(b,q)==0) cout<<"Sem ganhador"<<endl;
        else if(strcmp(a,r)==0&&strcmp(b,r)==0) cout<<"Ambos venceram"<<endl;
        else if((strcmp(a,p)==0)||(strcmp(a,q)==0&&strcmp(b,r)==0)) cout<<"Jogador 1 venceu"<<endl;
        else cout<<"Jogador 2 venceu"<<endl;
    }
    return 0;
}
