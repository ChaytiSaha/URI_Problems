#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a[2],m=99.0,u;
    int r,x;
    while(1)
    {
        r=0;
        while(r!=2)
        {
            cin>>m;
            if(m>=0.0 and m<=10.0)
            {
                a[r]=m;
                r++;
            }
            else
                cout<<"nota invalida"<<endl;
        }
        u=(a[0]+a[1])/2.0;
        printf("media = %.2lf\n",u);
        while(1)
        {
            cin>>x;
            cout<<"novo calculo (1-sim 2-nao)"<<endl;
            if(x==1)
                break;
            else if(x==2)
                exit(0);
        }
    }
    return 0;
}

