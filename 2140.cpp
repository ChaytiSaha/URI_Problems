#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,i,l,x,sum,j;
    int ara[6]={2, 5, 10, 20, 50, 100};
    while(scanf("%d%d",&m,&n)!=EOF&&m!=0&&n!=0)
    {
        l=-1;
        x=n-m;
        for(j=0;j<6;j++)
        {
            if(x==ara[j]){ l=0;
            break;}
        }
        if(l==-1&&(x<ara[0]||x>ara[5])) l=0;
        for(i=0;i<6;i++)
        {
            sum=ara[i];
            for(j=i+1;j<6;j++)
            {
                sum=sum+ara[j];
                if(sum==x)
                {
                    l=1;
                    break;
                }
                else sum=ara[i];
            }
        }
        if(l==0) cout<<"impossible"<<endl;
        else if(l==1) cout<<"possible"<<endl;
    }
    return 0;
}
/*
#include <stdio.h>

int main()
{
    int N, M, net, i, cndtn;
    int bill[15] = {7, 12, 22, 52, 102, 15, 25, 55, 105, 30, 60, 110, 70, 120, 150};
    while(1)
    {
        scanf("%d%d", &N, &M);
        if(N==0 && M==0) break;
        net = M - N;
        for(i=0, cndtn = 0; i<15; i++)
        {
            if(bill[i] == net)
            {
                cndtn = 1;
                break;
            }
        }
        if(cndtn) printf("possible\n");
        else printf("impossible\n");
    }
    return 0;
}
*/
