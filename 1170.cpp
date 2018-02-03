#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,num=1;
    cin>>t;
    while(t--)
    {
        num=0;
        float x;
        cin>>x;
        while(x>1)
        {
            x=x/2.0;
            num++;
        }
        cout<<num<<" dias"<<endl;
    }
    return 0;
}
