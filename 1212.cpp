#include<bits/stdc++.h>
using namespace std;
int main()
{
    long  m, n, rem1, rem2, sum, cnt;
    while( cin>>m>>n )
    {
        cnt=0; sum=0;
        if(m==0 && n==0) break;
        while( 1 )
        {
            if(m==0 && n==0) break;
            rem1 = m % 10;
            m = m / 10;
            rem2 = n % 10;
            n = n / 10;
            sum = rem1 + rem2 + sum;
            if(sum >= 10){
                sum = 1;
                cnt++;
            }
            else sum = 0;
        }
        if(cnt == 0) cout << "No carry operation." << endl;
        else if(cnt == 1) cout << "1 carry operation." << endl;
        else cout << cnt << " carry operations." << endl;
    }
    return 0;
}
