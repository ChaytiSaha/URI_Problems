#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,m,n,l,p;
    cin>>a>>b>>c>>d;
    m=max(a,max(b,c));
    n=max(a,max(c,d));
    l=max(a,max(b,d));
    p=max(b,max(c,d));
    if((a+b+c-m>m)||(a+c+d-n>n)||(a+b+d-l>l)||(b+c+d-p>p))
        cout<<"S"<<endl;
    else cout<<"N"<<endl;
    return 0;
}
/*
#include <stdio.h>
int main()
{
    int a[4],b,c,d,e,f, g;
    for(b=0; b<4; b++)
        scanf("%d", &a[b]);
    for(b=0;b<4;b++)
    {
        for(c=b+1; c<4; c++)
        {
            if(a[c]<a[b])//12 40 14 60
            {
                e=a[b];
                a[b]=a[c];
                a[c]=e;
            }
        }
    }
    g=a[1]+a[2];
    f=a[0]+a[1];
    if(a[3]<g || a[2]<f) printf("S\n");
    else printf("N\n");
    return 0;
}

