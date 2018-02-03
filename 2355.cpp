#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    long  score,brazil=0ll,zermani=0ll;
    while(cin>>score)
    {
        if(score==0ll)break;
        brazil=floor(score/90.0);
        zermani=ceil((7.0*score)/90.0);
        cout<<"Brasil "<<brazil<<" x Alemanha "<<zermani<<endl;
    }
    return 0;
}
