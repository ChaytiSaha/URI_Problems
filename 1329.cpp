#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0) break;
        int ara[n],i=0,Mary=0,John=0;
        while(i<n)
        {
            cin>>ara[i];
            if(ara[i]==0) Mary++;
            else John++;
            i++;
        }
        printf("Mary won %d times and John won %d times\n",Mary,John);
    }
    return 0;
}
