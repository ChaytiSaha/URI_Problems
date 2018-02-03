

































































#include <stdio.h>

int main(){
    int a, b, number, i, j, k, digits, qtd, flag;
    int numero[4];

    while(scanf("%d %d", &a, &b) == 2){
          qtd = 0;
          for(i = a; i <= b; i++){
                digits = 0;
                flag = 0;
                number = i;
                while (number != 0){
                      numero[digits] = number%10;
                      number /= 10;
                      digits++;
                }
                for(j = 0; j < digits; j++){
                      for(k = j+1; k < digits; k++){
                            if(numero[j] == numero[k]){
                                 flag = 1;
                            }
                      }
                }
                if(flag == 0) qtd++;
          }
          printf("%d\n",qtd);
    }

    return 0;
}
/*
#include <stdio.h>
int dgt(int x)
{
    int a,b=0;
    a=x;
    while(a)
    {
        a/=10;
        b++;
    }
    return b;
}
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n;
    while(scanf("%d%d" ,&a, &b)!=EOF)
    {
        for(c=a,e=0; c<=b; c++)
        {
            d=dgt(c);
            if(d==1) e++;
            else if(d==2)
            {
                f=c%10;
                k=c/10;
                g=k%10;
                if(f!=g) e++;
            }
            else if(d==3)
            {
                f=c%10;
                k=c/10;
                g=k%10;
                l=k/10;
                h=l%10;
                if(f!=g && f!=h &&g!=h) e++;
            }
            else if(d==4)
            {
                f=c%10;
                k=c/10;
                g=k%10;
                l=k/10;
                h=l%10;
                j=l/10;
                i=j%10;
                if(f!=g && f!=h && f!=i && g!=h && g!=i && h!=i) e++;
            }
        }
        printf("%d\n",e);
    }
    return 0;
}
*/
