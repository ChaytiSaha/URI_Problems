#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        double price[n],money=0.0;
        char sell[n][102];
        for(i=0;i<n;i++)
            cin>>sell[i]>>price[i];
        int m;
        cin>>m;
        int amount[m];
        char my[m][102];
        for(i=0;i<m;i++)
            cin>>my[i]>>amount[i];
        for(i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(strcmp(my[i],sell[j])==0)
                {
                    money+=amount[i]*price[j];
                    break;
                }
            }
        }
        printf("R$ %.2lf\n",money);
    }
    return 0;
}
