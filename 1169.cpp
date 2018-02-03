#include <bits/stdc++.h>
using namespace std;
#include <math.h>
int main(){
    int n, x;
    cin>>n;
    for(int i = 1; i <= n; i++){
            cin>>x;
            printf("%lld kg\n", (long long)(pow(2,x)/12000));
    }
    return 0;
}
