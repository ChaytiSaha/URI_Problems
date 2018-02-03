#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(a==0 && b==0) break;
        int ara[b],i,j,sum,tot=0;
        for(i=0;i<b;i++)
            cin>>ara[i];
        for(i=0;i<b;i++)
        {
            sum=0;
            for(j=i+1;j<b;j++)
            {
                if(ara[i]==ara[j] && ara[i]>0){
                    sum=1;
                    ara[j]=-99;
                }
            }
            if(sum==1)tot++;
        }
        cout<<tot<<endl;
    }
    return 0;
}
