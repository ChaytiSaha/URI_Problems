#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int tot=0,test,i,m,ara[103];
        cin>>test;
        char ch[200],a[3];
        for(i=0;i<test;i++)
        {
            getchar();
            cin>>ch;
            if(strcmp(ch,"LEFT")==0){
                tot=tot-1;
                ara[i]=-1;
            }
            else if(strcmp(ch,"RIGHT")==0){
                tot=tot+1;
                ara[i]=1;
            }
            else{
                scanf(" %s %d",a,&m);
                tot=tot+ara[m-1];
                ara[i]=ara[m-1];
            }
        }
        cout<<tot<<endl;
    }
    return 0;
}
