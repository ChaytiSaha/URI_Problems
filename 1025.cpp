
///eita accepted

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,s=1;
    while(scanf("%d%d",&n,&q)!=EOF &&n!=0&& q!=0)
    {
        int a[10005],b,i,j,m;
        for(i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        cout<<"CASE# "<<s<<":"<<endl;
        for(j=0;j<q;j++)
        {
            cin>>b;
            m=0;
            for(i=0;i<n;i++)
                if(b==a[i]) { m=1;break;}
            if(m==1) cout<<b<<" found at "<<i+1<<endl;
            else cout<<b<<" not found"<<endl;
        }
        s++;
    }
    return 0;
}


///eita accepted noy. becoz
///10 1
///1 1 2 2 3 3 5 5 4 4
///ans should be 7(means the location of first occurance )
///but in this way, ans is 8.


/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,item,beg,end,mid,d=1;
    while(cin>>n>>m)
    {
        if(n==0 && m==0) break;
    int i,data[n],query[m];
    for(i=0;i<n;i++)
        cin>>data[i];

    sort(data,data+i);


    printf("CASE# %d:\n",d);
    for(i=0;i<m;i++)
    {
        cin>>query[i];
        beg=0;end=n-1;
        mid=(beg+end)/2;
        while(beg<=end && data[mid]!=query[i])
        {
            if(query[i]<data[mid])
                end=mid-1;
            else
                beg=mid+1;
            mid=(beg+end)/2;
        }
        if(data[mid]==query[i])
            printf("%d found at %d\n",query[i],mid+1);
        else
            printf("%d not found\n",query[i]);
    }
    d++;
    }
    return 0;
}
*/
