#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,pare;
    while(scanf("%d",&t)!=EOF)
    {
        i=0;pare=0;
        int ara[t],dine,baw;
        char ch[t];
        while(i<t){
            scanf("%d %c",&ara[i],&ch[i]);
            i++;
        }
        for(i=0;i<t;i++)
        {
            dine=0;baw=0;
            if(ch[i]=='D') dine++;
            else if(ch[i]=='E') baw++;
            for(j=i+1;j<t;j++)
            {
                if(ara[i]==ara[j] && ara[j]>0){
                    if(ch[j]=='D') dine++;
                    else if(ch[j]=='E') baw++;
                    ara[j]=-33;
                }
            }
            if(dine<=baw)pare+=dine;
            else pare+=baw;
        }
        cout<<pare<<endl;
    }
    return 0;
}
