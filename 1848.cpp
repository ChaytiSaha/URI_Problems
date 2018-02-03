#include<bits/stdc++.h>
using namespace std;
int main()
{
    char crow[3][50],c[50];
    int i=0;
    int result=0;
    while(1)
    {
        gets(c);
        if(c[0]=='c'){
            strcpy(crow[i++],c);
            cout<<result<<endl;
            result=0;
        }
        else
        {
            if(c[0]=='*') result+=4;
            if(c[1]=='*') result+=2;
            if(c[2]=='*') result+=1;
        }
        if(i==3) break;
    }
    return 0;
}
