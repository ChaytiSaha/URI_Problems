#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
        char base[50]="0123456789ABCDEFGHIJKLMNOPQRSTUV",ans[50];
        unsigned long long n;
        int i,mod,j;
        cin>>n;
        if(n==0)
        {
            cout<<0<<endl;
            break;
        }
        else
        {
            for(i=0;n!=0;i++)
            {
                mod=n%32;
                ans[i]=base[mod];
                n=n/32;
            }
            for(j=i-1;j>=0;j--)
                cout<<ans[j];
            cout<<endl;
        }
    }
    return 0;
}
