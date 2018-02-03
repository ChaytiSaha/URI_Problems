#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,a[7],b[7],j,cnt=0;
    for(i=1;i<=6;i++)
        cin>>a[i];
    for(i=1;i<=6;i++)
        cin>>b[i];
    for(i=1;i<=6;i++)
        for(j=1;j<=6;j++)
            if(a[i]==b[j]) cnt++;

    if(cnt==6) cout<<"sena"<<endl;
    else if(cnt==5) cout<<"quina"<<endl;
    else if(cnt==4) cout<<"quadra"<<endl;
    else if(cnt==3) cout<<"terno"<<endl;
    else cout<<"azar"<<endl;
    return 0;
}
