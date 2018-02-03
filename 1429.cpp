#include<bits/stdc++.h>
long facto ( long );
using namespace std;
int main()
{
    long a, sum ,i ,rem;
    while( cin >> a && a )
    {
        i = 1; sum = 0;
        while( a )
        {
            rem = a % 10;
            a = a/10;
            sum = sum + rem * facto( i );
            i++;
        }
        cout << sum << endl;
    }
    return 0;
}

long facto( long i )
{
    if( i == 1 ) return 1;
    else return i*facto(i-1);
}
