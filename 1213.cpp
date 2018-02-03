#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, l, c;
	while(scanf("%lld", &n) == 1){
		l = 1;c = 1;
		while(l % n != 0){
			l = (10 * l + 1) % n;
			c++;
		}
		printf("%lld\n", c);
	}
    return 0;
}
