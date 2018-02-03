#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,cnt=0,j;
    cin>>t;
    int ara[t];
    for(i=0;i<t;i++)
        cin>>ara[i];
    sort(ara,ara+i);
    for(i=0;i<t;i++)
    {
        if(ara[i]>=0)cnt++;
        for(j=i+1;j<t;j++){
            if(ara[i]==ara[j] && ara[j]>=0)
                ara[j]=-999;
            else break;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
