#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,y,sum,per;
    cin>>x>>y;
    if(x==y) cout<<"0.00"<<"%"<<endl;
    else
    {
        sum=y-x;
        per=(sum*100.0)/x;
        printf("%.2lf%%\n",per);
    }
    return 0;
}
