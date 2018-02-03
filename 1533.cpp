#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    while (cin >> n)
    {
        if (n == 0) break;
        int ara[n];
        int first, second, loc1=0,loc2=1;
        for (int i = 0; i<n; i++)
            cin >> ara[i];
        first=ara[0];
        second =ara[1];
        if(second>first)
        {
            swap(first,second);
            swap(loc1,loc2);
        }
        for (int i = 2; i<n; i++)
        {
            if(ara[i]>second && ara[i]<first)
            {
                swap(ara[i],second);
                swap(i,loc2);
            }
            else if(ara[i]>first)
            {
                swap(first,second);
                swap(ara[i],first);
                swap(loc1,loc2);
                swap(i,loc1);
            }
        }
        cout <<loc2+1<< endl;
    }
    return 0;
}

