#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a,b,x,l=0,m=0,n=0,e=0;
    while(1)
    {
        cin>>a>>b;
        cout<<"Novo grenal (1-sim 2-nao)"<<endl;
        if(a>b)l++;
        else if(b>a)m++;
        else if(a==b)n++;
        e++;
        cin>>x;
        if(x==1)
            continue;
        else
        {
            cout<<e<<" grenais"<<endl;
            cout<<"Inter:"<<l<<"\n";
            cout<<"Gremio:"<<m<<endl;
            cout<<"Empates:"<<n<<endl;
            if(l>m)
                cout<<"Inter venceu mais"<<endl;
            else if(l<m)
                cout<<"Gremio venceu mais"<<endl;
            else
                cout<<"Nao houve vencedor"<<endl;
            break;
        }
    }
    return 0;
}

