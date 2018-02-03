#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    char ara[n][100];
    getchar();
    for(int i=0;i<n;i++)
        gets(ara[i]);
    for(int i=0;i<n;i++)
    {
        char temp[100];
        for(int j=i+1;j<n;j++){
            if(strcmp(ara[i],ara[j])>0)
            {
                strcpy(temp,ara[i]);
                strcpy(ara[i],ara[j]);
                strcpy(ara[j],temp);
            }
        }
    }
    puts(ara[k-1]);
    return 0;
}
