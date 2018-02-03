#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,n,sum=0,amnt=0;
    cin>>n>>x;
    sum=x;
    int cnt[n],i;
    for(i=0;i<n;i++)
    {
        cin>>amnt;
        sum=sum+amnt;
        cnt[i]=sum;
    }
    sort(cnt,cnt+i);
    cout<<cnt[0]<<endl;
    return 0;
}
