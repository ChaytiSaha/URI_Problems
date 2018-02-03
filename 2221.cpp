#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,x,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>x;
        double sum[2];
        for(i=0;i<=1;i++)
        {
            sum[i]=0.0;
            cin>>a>>b>>c;
            sum[i]=((double)a+(double)b)/2ll;
            if(c%2==0) sum[i]=sum[i]+x;
        }
        if(sum[0]==sum[1]) cout<<"Empate"<<endl;
        else if(sum[0]>sum[1]) cout<<"Dabriel"<<endl;
        else cout<<"Guarte"<<endl;
    }
    return 0;
}
