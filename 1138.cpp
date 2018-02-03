#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j,i,a1;
    while(1)
    {
        string a,b;
        cin>>a>>b;
        if(a[0]=='0' && b[0]=='0') break;
        int cnt[10]={0};
        for(a;a<=b;a=a+'1')
        {
            a1=a.size();
            j=0;
            while(j<a1)
            {
                if(a[j]=='1')cnt[1]++;
                else if(a[j]=='3') cnt[3]++;
                else if(a[j]=='5') cnt[5]++;
                else if(a[j]=='7') cnt[7]++;
                else if(a[j]=='9') cnt[9]++;
                else if(a[j]=='0') cnt[0]++;
                else if(a[j]=='2') cnt[2]++;
                else if(a[j]=='4') cnt[4]++;
                else if(a[j]=='6') cnt[6]++;
                else if(a[j]=='8') cnt[8]++;
                j++;
            }
        }
        printf("%d %d %d %d %d %d %d %d %d %d\n",cnt[0],cnt[1],cnt[2],cnt[3],cnt[4],cnt[5],cnt[6],cnt[7],cnt[8],cnt[9]);
    }
    return 0;
}
