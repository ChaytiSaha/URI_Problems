#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,len,t,number;
    char c[100];
    cin>>t;
    while(t--)
    {
        i=0;
        cin>>c;
        cin>>number;
        len=strlen(c);
        while(i<len)
        {
            if(c[i]-number<65) c[i]=c[i]-number+26;
            else c[i]=c[i]-number;
            i++;
        }
        puts(c);
    }
    return 0;
}

