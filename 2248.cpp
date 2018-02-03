#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,r,cnt,p=1,d;
    while(cin>>t)
    {
        if(t==0) break;
        i=0;r=-999;cnt=0,d=0;
        int a[t],b[t];
        while(i<t)
        {
            scanf("%d %d",&a[i],&b[i]);
            r=max(r,b[i]);
            if(r==b[i])cnt++;
            i++;
        }
        cout<<"Turma "<<p<<endl;
        for(i=0;i<t;i++)
        {
            if(b[i]==r)
            {
               cout<<a[i]<<" ";
               d++;
            }
            if(d==cnt) break;
        }
        cout<<endl<<endl;
        p++;
    }
    return 0;
}

