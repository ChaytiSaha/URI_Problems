#include<bits/stdc++.h>
using namespace std;
int main()
{
    int hits[1000],i,t,h,count=0;
    char pos[10000];
    cin>>t;
    while(t--)
    {
        count=0;
        scanf("%d",&h);
        for(i=0;i<h;i++)
            cin>>hits[i];
        cin>>pos;
        for(i=0;i<h;i++)
        {
            if(hits[i]>0&&hits[i]<=2&&pos[i]=='S') count++;
            else if(hits[i]>2&&pos[i]=='J') count++;
        }
        printf("%d\n",count);
    }
    return 0;
}

