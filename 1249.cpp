#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,len;
    char c[100];
    while(gets(c)!=NULL)
    {
        i=0;
        len=strlen(c);
        while(i<len)
        {
            if(c[i]>='a'&&c[i]<='z')
            {
                if(c[i]=='z') c[i]='z'-13;
                else if(c[i]>'m') c[i]=('a'+13)-('z'-c[i]+1);
                else c[i]=c[i]+13;
            }
            else if(c[i]>='A'&&c[i]<='Z')
            {
                if(c[i]=='Z') c[i]='Z'-13;
                else if(c[i]>'M') c[i]=('A'+13)-('Z'-c[i]+1);
                else c[i]=c[i]+13;
            }
            i++;
        }
        puts(c);
    }
    return 0;
}
