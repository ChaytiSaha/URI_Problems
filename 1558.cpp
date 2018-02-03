#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,flag;
    while(scanf("%d",&t)!=EOF)
    {
        if(t<0){
            cout<<"NO"<<endl;
            continue;
        }
        flag=0;
        for(i=0;i<=(int)sqrt(t)+1;i++)
        {
            for(j=i;j<=(int)sqrt(t)+1;j++)
            if((i*i + j*j)==t){
                    flag=1;
                    break;
            }
            if(flag==1) {
                cout<<"YES"<<endl;
                break;
            }
        }
        if(flag==0) cout<<"NO"<<endl;
    }
    return 0;
}
