#include <bits/stdc++.h>///eta accepted
using namespace std;
int main()
{
    double ara[10], sum=0;
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> ara[i], sum+=ara[i];
    for(int i=0; i<n; i++)
        ara[i] = (ara[i]*100.00)/sum;
    sort(ara, ara+n);
    reverse(ara,ara+n);
    if(ara[0]>=45) cout << 1 << endl;
    else if(ara[0]>=40 and ara[0]-ara[1]>=10) cout << 1 << endl;
    else cout << 2 << endl;
    return 0;
}

///eta accepted na. double besi use korer jonno

/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,p=0;
    cin>>t;
    double ara[t], tot, sum=0.0, mot, then, tool;

    for(i=0;i<t;i++){
        cin>>ara[i];
        sum+=ara[i];
    }
    sort(ara,ara+i);
    tot=.4*sum;
    tool=.45*sum;

    if(tool<=ara[t-1] ) p=0;
    else if(tot<=ara[t-1])
    {
        mot=(ara[t-1]/sum)*100;
        for(i=0;i<t-1;i++)
        {
            then=(ara[i]/sum)*100;
            if((mot-then)<=10)
            {
                p=1;
                break;
            }
        }
    }
    else p=1;
    if(p==1) cout<<2<<endl;
    else cout<<1<<endl;
    return 0;
}
*/
