#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x, y, dx, dy, r;
	cin>>x>>y;
    dx = dy = 0;
    r = 0;
    while(1)
    {
        r++;
        if((dy - dx) >= x)
            break;
        dx += x;
        dy += y;
    }
    printf("%d\n", r);
	return 0;
}
