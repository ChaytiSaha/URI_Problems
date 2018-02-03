#include <bits/stdc++.h>
using namespace std;
int main ()
{
    long long f[21];
    f[0]=1;
    for (int i=1; i<=20; i++){
        f[i]=f[i-1]*i;
    }
    string a;
    while (cin >> a){
        if (a=="0") break;
        int l = a.size();
        cout << f[l] << endl;
    }
    return 0;
}

