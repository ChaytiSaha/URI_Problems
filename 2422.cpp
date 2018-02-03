#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    unsigned long long int ara[n],sum=0llu;
    for(i=0;i<n;i++)
        cin>>ara[i];
    cin>>sum;
    for(i=1;i<n;i++)
    {
        if(ara[i-1]+ara[i]==sum && ara[i-1]<ara[i])
        {
            cout<<ara[i-1]<<" "<<ara[i]<<endl;
        }
    }
    return 0;
}
