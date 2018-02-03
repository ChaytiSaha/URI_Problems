#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,l=1;
    while(scanf("%d",&x)!=EOF)
    {
    int i,p,k,num=1,j,ara[100000];
    ara[0]=0;
    for(i=1,p=1,k=1;i<=x;i++)
    {
        for(j=1;j<=i;j++)
        {
            ara[k++]=p;
            num++;
        }
        p++;
    }
    if(num==1) cout<<"Caso "<<l++<<": "<<num<<" numero"<<endl;
    else if(num>1) cout<<"Caso "<<l++<<": "<<num<<" numeros"<<endl;
    for(j=0;j<k;j++){
        if(j==0) cout<<ara[j];
        else cout<<" "<<ara[j];}
    cout<<endl<<endl;
    }
    return 0;
}
