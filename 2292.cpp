#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int y,i;
    char lamp[62];
    int t,j;
    cin>>t;
    while(t--)
    {
        getchar();
        scanf("%s %lld",lamp,&y);
        for(i=0ll;i<y;i++)
        {
            j=0;
            if(lamp[0]=='X')lamp[0]='O';
            else
            {
              lamp[0]='X';
              while(lamp[j]!='O')
              {
                if(lamp[j+1]=='O')lamp[j+1]='X';
                else lamp[j+1]='O';
                j++;
              }
            }
        }
        puts(lamp);
    }
    return 0;
}
