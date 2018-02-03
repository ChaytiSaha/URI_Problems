#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int sum,i=1,a,b,mot=0;
    cin>>a>>b;
    sum=a;
    while(b--)
    {
        cin>>mot;
        if((sum==0&& mot<0)||(sum==100 && mot>0)) continue;
        if(sum+mot>=0 && sum+mot<=100)
            sum=sum+mot;
        else if(sum+mot<0)sum=0;
        else if(sum+mot>100)sum=100;
    }
    cout<<sum<<endl;
    return 0;
}





