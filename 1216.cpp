#include <bits/stdc++.h>
using namespace std;

int main() {
    char  str[500];
    double sum=0,num;
    int tot=0;
    while ((gets(str) ,(scanf("%lf" ,&num)))!=EOF) {
          sum=sum+num;
          tot++;
    }
    printf("%.1lf\n",sum/double(tot));
    return 0;
}
