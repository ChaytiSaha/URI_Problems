#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[150];
    int i, cnt=0,p;
    cin>>str;
    for(i=0; str[i]; i++)
        if(str[i]=='1')
            cnt++;
    if(cnt%2==0) p=0;
    else p=1;
    cout<<str<<p<<endl;
    return 0;
}
