#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i=1;
    cin>>t;
    while(i<=t)
    {
        int a,j=0,m=-3,r=0,k=0;
        cin>>a;
        int num[a];
        while(j<a)
        {
            cin>>num[j];
            m=max(m,num[j]);
            j++;
        }
        for(j=0;j<a;j++)
        {
            if(num[j]==m)k++;
            else k=0;
            r=max(r,k);
        }
        cout<<"Caso #"<<i<<": "<<r<<endl;
        i++;
    }
    return 0;
}
