#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        string a;
        if(s=="0+0=0")break;
        int pos=s.find('+')+1,len=s.length(),carry=0;
        int maxi=max((pos-1),(len-pos));
        for(int i=0;i<maxi;i++,pos++)
        {
            int num=((int)s[i]-48)+((int)s[pos]-48);
            if(num<=9){
                    a=a+(char)num;
                    carry=0;
            }
            else{
                    a=a+'1';
                    carry=num%10;
            }
        }
        cout<<a<<endl;
    }
    return 0;
}
