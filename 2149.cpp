#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    long long fib3,fib1,fib2;
    while(scanf("%d",&n)!=EOF)
    {
        fib3=0ll; fib1=0ll;fib2=1ll;
        if(n==1) cout<<0<<endl;
        else if(n==2) cout<<1<<endl;
        else
        {
            for(i=3;i<=n;i++){
                if(i%2!=0)
                {
                    fib3=fib1+fib2;
                    fib1=fib2;
                    fib2=fib3;
                }
                else
                {
                    fib3=fib1*fib2;
                    fib1=fib2;
                    fib2=fib3;
                }
            }
            cout<<fib3<<endl;
        }
    }
        return 0;
}

