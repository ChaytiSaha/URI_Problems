#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d1,m1,d2,m2;
    int a=0,total=0;
    cin>>d1>>m1;
    cin>>d2>>m2;
    if(m1==m2) total=d2-d1;
    else
    {
        if(m1==2) a=28-d1;
        else if(m1==1||m1==3||m1==5||m1==7||m1==8||m1==10||m1==12) a=31-d1;
        else a=30-d1;
        for(int i=m1+1;i<m2;i++)
        {
             if(i==2) a=a+28;
             else if(i==1||i==3||i==5||i==7||i==8||i==10||i==12) a=a+31;
             else a=a+30;
        }
        total=a+d2;
    }
    cout<<total<<endl;
    return 0;
}
