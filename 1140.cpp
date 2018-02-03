#include <bits/stdc++.h>
using namespace std;
int main()
{
    char text[1200];
    int x;
    while(gets(text))
    {
        char ch = 'Y';
        if(text[0] == '*') break;
        if(islower(text[0])) text[0]=toupper(text[0]);
        for(x=1; x<strlen(text);x++)
        {
            if(text[x]==' ')
            {
                if(islower(text[x+1])) text[x+1]=toupper(text[x+1]);
                if(text[x+1]!=text[0])
                {
                    ch= 'N';
                    break;
                }
                else ch='Y';
            }
        }
        cout<<ch<<endl;
    }
    return 0;
}
