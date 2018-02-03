#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, i, j, zero, cont;
    char number[101];
    while(cin >> n){
        scanf("%s",number);
        if(n == 0 && number[0] == '0') break;
        char changed[101];
        i = 0; j = 0; zero = 0; cont = 0;
        while(true){
                if(number[i] == '\0') break;
                else if(number[i] != n+48){
                    changed[j] = number[i];
                    if(j == zero) cont++;
                    if(number[i] == '0') zero++;
                    j++;
                }
                i++;
        }
        changed[j] = '\0';
        if(j == 0) printf("0\n"); ///7 777
        else{
            for(int k = cont-1; changed[k] != '\0'; k++)
                    printf("%d",changed[k]-48);
            printf("\n");
        }
    }
    return 0;
}
