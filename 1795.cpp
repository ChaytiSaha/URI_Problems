#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,m,k,d;
    scanf("%d",&m);
    long long sum;
    int p[m+100][m+100];
    for(i=0,d=1;i<=m;i++)
    {
        sum=0;
        for(j=0;j<d;j++)
        {
            if(j==0 || j==d-1 || i==1) p[i][j]=1;

            else if(j==1) p[i][j]=p[i-1][j-1]+p[i-1][j];

            else if(j==(d-2)) p[i][j]=p[i-1][j-2]+p[i-1][j-1];

            else p[i][j]=p[i-1][j-2]+p[i-1][j-1]+p[i-1][j];

            sum+=p[i][j];
        }
        d+=2;
    }
    cout<<sum<<endl;
    return 0;
}

