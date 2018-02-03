#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,m;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF)
    {
        if(a==0 && b==0 &&c==0) break;
        m=(int)cbrt(a*b*c);/// cbrt() is used to find the cube root of number. cbrtf() can also be used. both r same.
        cout<<m<<endl;
    }
    return 0;
}
