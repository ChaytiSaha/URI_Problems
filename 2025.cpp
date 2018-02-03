#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while( t-- )
    {
        char a[101], b[12];
        int i = 0 , k = 0 ;
        getchar ();
        cin >> a;
        while( a[i] != '\0' )
        {
            if( a[i] != ' ' ){//Joulupukki
                b[k++] = a[i];}
            if( k == 11 )
            {
                a[i-9] = 'J';
                a[i-8] = 'o';
                a[i-7] = 'u';
                a[i-6] = 'l';
                a[i-5] = 'u';
                a[i-4] = 'p';
                a[i-3] = 'u';
                a[i-2] = 'k';
                a[i-1] = 'k';
                a[i-0] = 'i';
            }
            if( a[i] == ' ')
                k = 0;
            i++;
        }
        puts( a );
    }
    return 0;
}
