#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int m,n;
    while(scanf("%lld %lld",&m,&n) && m && n)
    {
        long long div, sum,ara[10000];
        int i=0,k;
        sum=m+n;
        div=1;
        while(sum!=0)
        {
            div=sum%10;
            sum=sum/10;
            if(div!=0)
                ara[i++]=div;
        }
        for(k=i-1;k>=0;k--)
            cout<<ara[k];
        cout<<endl;
    }
    return 0;
}

///with stack

/*
#include <iostream>
#include <stack>
using namespace std;
int main()
{
    long long int a,b,sum;
    while(cin>>a>>b)
    {
        stack <int> result;
        if(a==0&&b==0)
            break;
        sum = a + b;
        while(sum)
        {
            if(sum%10)
                result.push(sum%10);
            sum/=10;
        }
        while(!result.empty())
        {
            cout<<result.top();
            result.pop();
        }
        cout<<endl;
    }
}
*/
