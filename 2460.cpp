#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,i,cnt=0,s,beg,end,mid;
    scanf("%d",&m);
    int a[m];
    for(i=0;i<m;i++)
        scanf("%d",&a[i]);
    scanf("%d",&n);
    int b[n];
    for(i=0;i<n;i++)
        scanf("%d",&b[i]);
    sort(b,b+i);
    for(i=0;i<m;i++)
    {
        beg=0;end=n-1;
        mid=(beg+end)/2;
        while(beg<=end && b[mid]!=a[i])
        {
            if(a[i]<b[mid])
                end=mid-1;
            else
                beg=mid+1;
            mid=(beg+end)/2;
        }
        if(b[mid]!=a[i])
        {
            if(cnt==0){ printf("%d",a[i]); cnt++;}
            else printf(" %d",a[i]);
        }
    }
    printf("\n");
    return 0;
}
