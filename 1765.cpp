#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    while (cin >> t && t!=0)
    {
        for (int i=1; i<= t; ++i)
        {
            int amount;
            double a, b, area;
            cin >> amount >> a >> b;
            area = (double) (amount*((((a/2)+(b/2))*5)));
            cout << "Size #" << i << ":\nIce Cream Used: "<< setprecision(2) << fixed << area << " cm2" << endl;
                                                         /// cout << "HELLO" << setw(7) << "World" ; cout for display data
                                                         ///on screen it Shows HELLO  World, After Hello Their is one space
                                                         ///as i give and World is of 5 character and we set width of 7 it
                                                         ///means we get 7 columns and we have to fill with that data here
                                                         /// World so Output is HELLO<space><space>World. Their is two space
                                                         /// after HELLO because we give width = 7 and 5 are filled and two
                                                         ///are filled with space & it start from Right.;
        }
        cout << endl;
    }
    return 0;
}
