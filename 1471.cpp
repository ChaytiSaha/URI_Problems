#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,p,d;
    while(scanf("%d%d",&n,&k)!=EOF)
    {
        int ara[k],a[n];
        p=0;d=0;
        for(i=0;i<k;i++)
            cin>>ara[i];
        sort(ara,ara+i);
        for(i=0;i<n;i++){
            if(ara[p]==i+1)p++;
            else a[d++]=i+1;
        }
        if(p==n) cout<<"*"<<endl;
        else{
            for(i=0;i<d;i++)
                cout<<a[i]<<" ";
        cout<<endl;
        }
    }
    return 0;
}

