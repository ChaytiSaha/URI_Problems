#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i=0;
    double x, y;
    double ans;
    while(scanf("%lf %lf", &x, &y)!=EOF)
    {
        ans = (double) ((y - x)/x)*100.00;
        printf("Projeto %d:\n", ++i);
        printf("Percentual dos juros da aplicacao: %.2lf %%\n\n", ans);
    }
    return 0;
}

