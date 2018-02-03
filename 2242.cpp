#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, j=0, l=0;
    char x[51], y[51],z[51];
    cin>>x;
    for(i=0; x[i]!='\0'; i++)
        if(x[i]=='a' or x[i]=='e' or x[i]=='i' or x[i]=='o' or x[i]=='u')
            y[j++] = x[i];
    y[j] = '\0';

    for(i=j-1; i>=0; i--)
        z[l++] = y[i];
    z[l] = '\0';

    if(strcmp(y,z)==0) cout<<"S"<<endl;
    else cout<<"N"<<endl;
    return 0;
}
