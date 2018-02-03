#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a;
    cin>>t;
    while(t--)
    {
        cin>>a;
        int ara[a],cnt=0;
        for(int i=0;i<a;i++)
            cin>>ara[i];
        for(int i=0;i<a;i++)
            for(int j=i+1;j<a;j++){
                if(ara[i]==ara[j] && ara[j]>=0){
                        ara[j]=-33;
                }
            }
        for(int i=0;i<a;i++)
            if(ara[i]>=0)cnt++;
        cout<<cnt<<endl;
    }
    return 0;
}

