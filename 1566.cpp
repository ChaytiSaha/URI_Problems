#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,i;
    scanf("%d",&t);
    while(t--)
    {
        cin>>x;
        int ara[x];
        for(i=0;i<x;i++)
            scanf("%d",&ara[i]);
        sort(ara,ara+i);
        printf("%d",ara[0]);
        for(i=1;i<x;i++)
            printf(" %d",ara[i]);
        printf("\n");
    }
    return 0;
}
*/
