#include<bits/stdc++.h>
int way(int x,int y);
using namespace std;
int main()
{
    int n,i,j=0,k=0,t;
    cin>>n;
    unsigned number[n],e[n],o[n];
    for(i=0;i<n;i++)
    {
        cin>>number[i];
        if(number[i]%2==0) e[j++]=number[i];
        else o[k++]=number[i];
    }
    sort(e,e+j); //sort[first,last) here sort includes those elements
                //between first and last excluding last & including first .  and its comlexity O(nlog n)
    sort(o,o+k,way);
    for(i=0,k=0;i<n;i++)
        if(i<=j-1)cout<<e[i]<<endl;
        else cout<<o[k++]<<endl;
    return 0;
}
int way(int x,int y)
{
    return x>y;
}
