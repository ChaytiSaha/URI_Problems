#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        if(s=="*")break;
        int len=s.length();
        int cnt=0;
        double sum=0.00;
        for(int i=0;i<len;i++)
        {
            if(s[i]=='/'){
                if(sum==1.00) cnt++;
                sum=0.00;
            }
            else{
                if(s[i]=='W')sum+=1.00;
                if(s[i]=='H')sum+=1/2.0;
                if(s[i]=='Q')sum+=1/4.0;
                if(s[i]=='E')sum+=1/8.0;
                if(s[i]=='S')sum+=1/16.0;
                if(s[i]=='T')sum+=1/32.0;
                if(s[i]=='X')sum+=1/64.0;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
