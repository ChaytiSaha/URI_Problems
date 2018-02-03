#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,result=1;
    cin>>n;
    int ara[n+1];
    for(i=0;i<n;i++)
        cin>>ara[i];
    sort(ara,ara+i);
    ara[i]=5000;
    for(i=0;i<n;i++)
    {
        if(ara[i]==ara[i+1])result++;
        else{
            cout<<ara[i]<<" aparece "<<result<<" vez(es)"<<endl;
            result=1;
        }
    }
    return 0;
}
