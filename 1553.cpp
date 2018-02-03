#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,cnt;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(a==0 && b==0) break;
        int ara[a],j,tot=0;
        for(i=0;i<a;i++)
            cin>>ara[i];
        for(i=0;i<a;i++)
        {
            if(ara[i]>0)cnt=1;
            else cnt=0;
            for(j=i+1;j<a;j++)
            {
                if(ara[i]==ara[j] && ara[j]>0)
                {
                    cnt++;
                    ara[j]=-33;
                }
            }
            if(cnt>=b) tot++;
        }
        cout<<tot<<endl;
    }
    return 0;
}
