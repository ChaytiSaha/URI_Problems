#include<stdio.h>
int main ()
{
    int Q, D, P, x;
    while ( 1 ) {
        scanf ( "%d", &Q );
        if ( Q==0 ) return 0;
        scanf ( "%d %d", &D, &P );

        x = (double) (P*D)/(P-Q)*Q;//P*x-P*D=Q*x //x is variable // so, x=((P*D)/(p-Q)) and the ans is = Q*x

        if ( x == 1 ) printf ( "%d pagina\n", x );
        else printf ( "%d paginas\n", x );
    }
    return 0;
}

