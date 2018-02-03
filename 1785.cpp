#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5]={1001,1002,1003,1004,1005};
    double b[5]={1.50,2.50,3.50,4.50,5.50};
    int t;
    cin>>t;
    int c[t],i=0;
    double d[t],e[t],f=0.0;
    while(i<t){
        cin>>c[i]>>d[i];
        i++;}
    for(i=0;i<t;i++)
    {
        if(c[i]==a[0]) e[i]=d[i]*b[0];
        else if(c[i]==a[1]) e[i]=d[i]*b[1];
        else if(c[i]==a[2]) e[i]=d[i]*b[2];
        else if(c[i]==a[3]) e[i]=d[i]*b[3];
        else if(c[i]==a[4]) e[i]=d[i]*b[4];
    }
    for(i=0;i<t;i++)
        f=f+e[i];
    printf("%.2lf\n",f);
    return 0;
}
