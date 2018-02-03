#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,cnt,j;
    cin>>n;
    int ara[n],pink[n],d=0,temp,boro;
    for(i=0;i<n;i++)
        cin>>ara[i];
    for(i=0;i<n;i++)
    {
            pink[i]=1;
            for(j=i+1;j<n;j++)
            {
                if(ara[i]==ara[j] && ara[j]>0){
                    ara[j]=-88;
                    pink[i]=pink[i]+1;
                }
            }
    }
    boro=pink[0];
    temp=ara[0];
    for(i=1;i<n;i++)
    {
        if(ara[i]>0)
        {
            if(pink[i]>boro)
            {
                boro=pink[i];
                temp=ara[i];
            }
            else if(pink[i]==boro)
            {
                if(temp>ara[i])
                    temp=temp;
                else temp=ara[i];
            }
        }
    }
    cout<<temp<<endl;
    return 0;
}
