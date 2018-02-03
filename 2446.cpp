

///not



#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int i,a,b,num,sum=0;
    cin>>a>>b;
    for(i=b;i<=b;i++)
    {
        cin>>num;
        if(num<=a){
            if(sum<a)
              sum=sum+num;
        }
        if(sum>a)sum=sum-num;
    }
    if(sum==a) cout<<"S"<<endl;
    else cout<<"N"<<endl;
    return 0;
}






