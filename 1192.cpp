#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--){
        string str;
        cin >> str;
        int a = str[0] - '0';
        int b = str[2] - '0';
        if (a==b)
            cout << (a*b) << endl;
        else if (isupper(str[1]))
            cout << (b-a) << endl;
        else if(islower(str[1]))
            cout << (a+b) << endl;
    }
    return 0;
}

