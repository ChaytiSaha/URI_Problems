#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    if(n<=1)m=1;
    else if(n>1 && n<=3)m=3;
    else if(n>3 && n<=5)m=5;
    else if(n>5 && n<=10)m=10;
    else if(n>10 && n<=25)m=25;
    else if(n>25 && n<=50)m=50;
    else if(n>50 && n<=100)m=100;
    cout<<"Top "<<m<<endl;
    return 0;
}
