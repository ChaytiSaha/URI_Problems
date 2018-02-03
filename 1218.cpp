#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, num, i=0, par, f, m;
    char c, e;
    while(scanf("%d",&t) != EOF)
    {
        par = 0, f = 0 , m = 0;
        while(scanf("%d %c%c",&num,&c,&e)){
            if(num == t){
                par++;
                if(c == 'F') f++;
                else m++;
            }
            if(e == '\n') break;
        }
        if(i != 0) cout<<endl;
        i++;
        cout<<"Caso "<<i<<":"<<endl<<"Pares Iguais: "<<par<<endl<<"F: "<<f<<endl<<"M: "<<m<<endl;
    }

    return 0;
}
