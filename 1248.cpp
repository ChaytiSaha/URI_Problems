#include<bits/stdc++.h>
using namespace std;
int cmpstr(void const *a, void const *b) {
    char const *aa = (char const *)a;
    char const *bb = (char const *)b;
    return strcmp(aa, bb);
}
int main(){
    int n, i, j;
    int flag;
    char dieta[27], cafe[60], almoco[27];
    cin>>n;
    getchar();
    while(n--){
        flag = 0;
        gets(dieta);
        gets(cafe);
        gets(almoco);
        strcat(cafe, almoco);
        qsort(dieta,strlen(dieta),sizeof(char),cmpstr);
        qsort(cafe,strlen(cafe),sizeof(char),cmpstr);
        for(j = 0; j < strlen(cafe); j++){
            if(strchr(dieta,cafe[j])==0){
                printf("CHEATER");
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            printf("\n");
            continue;
        }
        for(j = 0; j < strlen(dieta); j++)
            if(strchr(cafe,dieta[j])==0)
                printf("%c",dieta[j]);
        printf("\n");
    }
    return 0;
}
