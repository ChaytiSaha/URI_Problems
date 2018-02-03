#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while(scanf("%d:%d",&a,&b)!=EOF)
    {
        if((a==7 && b==0)||a<7) cout<<"Atraso maximo: "<<0<<endl;
        else cout<<"Atraso maximo: "<<(a-8)*60+b+60<<endl;
    }
    return 0;
}
