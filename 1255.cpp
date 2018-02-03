#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m,i,r,ara[150];
    scanf("%d",&t);
    char str[300];
    getchar();
    while(t--)
    {
        r=0;
        gets(str);
        m=strlen(str);
        memset(ara,0,sizeof(ara));
        for(i=0;i<m;i++)
        {
            if(isalpha(str[i]))
            {
                if(isupper(str[i]))
                    str[i]=tolower(str[i]);
                ara[(int)str[i]]++;
            }
        }
        for(i=97;i<=122;i++)
            r=max(r,ara[i]);
        for(i=97;i<=122;i++)
            if(ara[i]==r) printf("%c",i);
        cout<<endl;
    }
    return 0;
}
