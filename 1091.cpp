#include<bits/srdc++.h>
using namespace std;
int main()
{
    int tc;
    int x,y;
    int n,m;
    while(cin>>tc){
        if(tc!=0){
            cin>>n>>m;

            for(int i=1;i<=tc;i++){
                cin>>x>>y;
                    if(x==n || x==m || y==n || y==m) cout<<"divisa"<<endl;
                    else if(x>n && y >m) cout<<"NE"<<endl;
                    else if(x<n && y>m) cout<<"NO"<<endl;
                    else if(x<n && y<m) cout<<"SO"<<endl;
                    else if(x>n && y<m) cout<<"SE"<<endl;
            }
        }
        else break;
    }
    return 0;
}

