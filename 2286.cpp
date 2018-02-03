#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i=1,x,y;
    char a[20],b[20];
    while(scanf("%d",&t) && t!=0)
    {
        cin>>a>>b;
        cout<<"Teste "<<i<<endl;
        while(t--)
        {
            cin>>x>>y;
            if((x+y)%2==0) cout<<a<<endl;
            else cout<<b<<endl;
        }
        i++;
        cout<<endl;
    }
    return 0;
}
