#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    long long num,i;
    int t,cnt;
    cin>>t;
    while(t--)
    {
        cin>>num;
        for(i=2ll,cnt=0;i<=sqrt(num);i++)
        {
            if(num%i==0ll)
                cnt++;
        }
        if(cnt>0) cout<<"Not Prime"<<endl;
        else cout<<"Prime"<<endl;
    }
    return 0;
}
