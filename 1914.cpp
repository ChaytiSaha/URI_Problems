#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[20],b[20],c[20],d[20],e[20]="PAR",f[20]="IMPAR";
        cin>>a>>b>>c>>d;
        int p,q,r=-1;
        cin>>p>>q;
        r=(p+q)%2;
        if(r==0)
        {
            if(!strcmp(b,e)) cout<<a<<endl;
            else if(!strcmp(d,e)) cout<<c<<endl;
        }
        else if(r>0)
        {
            if(!strcmp(b,f)) cout<<a<<endl;
            else if(!strcmp(d,f)) cout<<c<<endl;
        }
    }
    return 0;
}
