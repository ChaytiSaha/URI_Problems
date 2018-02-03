#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    char name[100];
    double degree,a,b,c,d,e,f,g,maximum,minimum,tot;
    while(t--)
    {
       getchar();
       gets(name);
       cin>>degree;
       cin>>a>>b>>c>>d>>e>>f>>g;
       maximum=max(g,max(f,max(e,max(d,max(c,max(b,a))))));
       minimum=min(g,min(f,min(e,min(d,min(c,min(b,a))))));
       tot=(a+b+c+d+e+f+g-maximum-minimum)*degree;
       printf("%s %.2lf\n",name,tot);
    }
    return 0;
}
