#include<bits/stdc++.h>
#define g 9.80665
#define PI 3.14159
using namespace std;
int main()
{
    double h,p1,p2,angle,v,range,s,c;
    while(scanf("%lf",&h)!=EOF)
    {
        cin>>p1>>p2;
        int t;
        cin>>t;
        while(t--)
        {
            cin>>angle>>v;
            c=cos(angle*PI/180);
            s=sin(angle*PI/180);
            range=(v*c)/g*(v*s+sqrt((v*v*s*s)+(2*g*h)));
            if(range>=p1 && range<=p2)
                printf("%.5lf -> DUCK\n",range);
            else printf("%.5lf -> NUCK\n",range);
        }
    }
    return 0;
}
