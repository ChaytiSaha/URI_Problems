#include<bits/stdc++.h>
using namespace std;
int main()
{
    while( 1 )
    {
        int h1, m1, h2, m2, time;
        cin >> h1 >> m1 >> h2 >> m2;
        if( h1==0 && m1==0 && h2==0 && m2==0) break;

        if( h2>h1 && ( m2==m1 || m2>m1 ) ) time = (m2-m1) + ( (h2-h1) * 60 );

        else if( h2>h1 && m1>m2 ) time = ( (h2-h1) * 60 ) - (m1-m2);

        else if( h1>h2 ) time = ( (23-h1) * 60 ) + (60-m1) + m2 + (h2*60);

        else if( h1==h2 && m2>=m1 ) time = m2-m1;

        else if( h1==h2 && m1>m2 ) time = ( (23-h1) * 60 ) + (60-m1) + m2 + (h2*60);

        cout << time << endl;
    }
    return 0;
}
