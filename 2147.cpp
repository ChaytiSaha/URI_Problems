#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    double x;
    char a[10000];
    while(t--)
    {
        scanf("%s",a);
        x=strlen(a);
        printf("%.2lf\n",x*.01);
    }
    return 0;
}
