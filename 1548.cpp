#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,i,cnt=0;
        cin>>x;
        int ara[x],para[x];
        for(i=0;i<x;i++)
        {
            cin>>ara[i];
            para[i]=ara[i];
        }
        sort(para,para+i);
        reverse(para,para+i);
        for(i=0;i<x;i++)
            if(ara[i]==para[i])
                cnt++;
        cout<<cnt<<endl;
    }
    return 0;
}
