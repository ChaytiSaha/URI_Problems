#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,k,j,alen,blen,rest,c;
    string a,b;
    while(getline(cin,a) and getline(cin,b))//by using getline we can define string type data.
    {
    rest=0;
    alen=a.length();
    blen=b.length();
    for(i=0;i<alen;i++)
        for(j=0;j<blen;j++)
            if(a[i]==b[j])
            {
                for(k=0,c=0;k+j<blen and k+i<alen;k++,c++)
                    if(a[k+i]!=b[k+j]) break;
                if(c>rest)rest=c;
            }

    cout<<rest<<endl;
    }
    return 0;
}
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,k,j,alen,blen,rest,c;
    char a[100],b[100];
    while(gets(a) and gets(b))
    {
    rest=0;
    alen=strlen(a);
    blen=strlen(b);
    for(i=0;i<alen;i++)
        for(j=0;j<blen;j++)
            if(a[i]==b[j])
            {
                for(k=0,c=0;k+j<blen and k+i<alen;k++,c++)
                    if(a[k+i]!=b[k+j]) break;
                if(c>rest)rest=c;
            }

    cout<<rest<<endl;
    }
    return 0;
}
*/
