#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0) break;
        int a,b,i=1,og=0,child=0;
        while(i<=n)
        {
            cin>>a>>b;
            if(a>b) og++;
            else if(b>a)child++;
            i++;
        }
        cout<<og<<" "<<child<<endl;
    }
}
