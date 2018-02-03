#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x,i;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
    if(a==12 && b==25) cout<<"E natal!"<<endl;
    else if(a==12 && b>25) cout<<"Ja passou!"<<endl;
    else if(a==12 && b==24) cout<<"E vespera de natal!"<<endl;
    else
    {
        int ara[12]={31,29,31,30,31,30,31,31,30,31,30,25};
        x=-b;
        for(i=a-1;i<12;i++)
            x=x+ara[i];
        cout<<"Faltam "<<x<<" dias para o natal!"<<endl;
    }
    }
    return 0;
}
