#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,alen,blen,d,p;
    char a[200],b[200];
    while(scanf("%s %s",a,b)!=EOF)
    {
    alen=strlen(a);
    blen=strlen(b);
    p=0;
    for(i=0;i<alen;i++)
    {
        for(j=0,d=i;b[j];j++,d++)
            if(a[d]!=b[j]) break;
        if(j==blen)
        {
            cout<<"Resistente"<<endl;
            p=100;
            break;
        }
    }
    if(p==0) cout<<"Nao resistente"<<endl;
    }
    return 0;
}

