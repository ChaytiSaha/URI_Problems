#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,sum,i,j;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>x;
        char str[100];
        for(i=0;i<x;i++)
        {
            cin>>str;
            for(j=0;str[j];j++)
                sum+= str[j] - 'A' + i + j;
        }
        cout<<sum<<endl;
    }
    return 0;
}
