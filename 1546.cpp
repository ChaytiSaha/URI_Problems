#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a;
        for(int i=1;i<=a;i++)
        {
            cin>>b;
            if(b==1)     cout<<"Rolien"<<endl;
            else if(b==2)cout<<"Naej"<<endl;
            else if(b==3)cout<<"Elehcim"<<endl;
            else if(b==4)cout<<"Odranoel"<<endl;
        }
    }
    return 0;
}
