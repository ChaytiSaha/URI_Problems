#include<bits/stdc++.h>
using namespace std;
int main()
{
    char c[100],a[500];
    int alen=0,i,sum;
    while(gets(c),gets(a))
    {
        i=0,sum=0;
        alen=strlen(a);
        for(i=0;i<alen;i++)
        {
            if(strchr(c,a[i]))
                sum++;
        }
        cout<<sum<<endl;
    }
    return 0;
}
