#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c;
    cin>>t;
    while(t--)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(c==1)printf("%02d:%02d - A porta abriu!\n",a,b);
        else printf("%02d:%02d - A porta fechou!\n",a,b);
    }
    return 0;
}
