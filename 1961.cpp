#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int ara[y],i,fin=0;;
    for(i=0;i<y;i++)
        cin>>ara[i];
    for(i=1;i<y;i++)
    {
        if(ara[i]>ara[i-1]){
           if((ara[i]-ara[i-1])>x)
               fin++;}
        else if(ara[i-1]>ara[i]){
            if((ara[i-1]-ara[i])>x)
                fin++;}
    }
    if(fin>0) cout<<"GAME OVER"<<endl;
    else cout<<"YOU WIN"<<endl;
    return 0;
}
