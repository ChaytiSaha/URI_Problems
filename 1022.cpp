#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long  n1,d1,n2,d2,a,b,GCD;
        char c;
        scanf("%ld / %ld %c %ld / %ld",&n1,&d1,&c,&n2,&d2);
        if(c=='+') { a = n1*d2+n2*d1;  b = d1*d2;}
        else if(c=='-') { a = n1*d2-n2*d1;  b = d1*d2;}
        else if(c=='*') { a = n1*n2; b = d1*d2;}
        else if(c=='/') { a = n1*d2; b = n2*d1;}
        GCD=__gcd(a,b);
        if(GCD<0) GCD=-1*GCD;
        printf("%ld/%ld = %ld/%ld\n",a,b,a/GCD,b/GCD);
    }
    return 0;
}
/*
Sum: (N1*D2 + N2*D1) / (D1*D2)
Subtraction: (N1*D2 - N2*D1) / (D1*D2)
Multiplication: (N1*N2) / (D1*D2)
Division: (N1/D1) / (N2/D2), that means (N1*D2)/(N2*D1)
*/
