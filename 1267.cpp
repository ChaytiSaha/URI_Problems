#include<bits/stdc++.h>
using namespace std;
int aro[500];
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        if(a==0 && b==0) break;
        int ara[b][a],i,j,lol=1;

        memset(aro,0,sizeof(aro));

        for(i=0;i<b;i++)
        {
            for(j=0;j<a;j++){
                cin>>ara[i][j];
                if(ara[i][j]==1) aro[j]++;
            }
        }
        for(j=0;j<a;j++)
        {
            if(aro[j]==b) {
                lol=99;
                break;
            }
        }
        if(lol==99) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}
