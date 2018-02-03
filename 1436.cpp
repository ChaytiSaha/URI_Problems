#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int t,i=1;
    cin>>t;
    while(i<=t)
    {
        int j=0,n,cont,store;
        float out;
        cin>>n;
        out=(float)n/2.0;
        cont=floor(out);
        int ara[n];
        while(j<n)
        {
            cin>>ara[j];
            if(j==cont)
                store=ara[j];
            j++;
        }
        cout<<"Case "<<i<<": "<<store<<endl;
        i++;
    }
    return 0;
}
