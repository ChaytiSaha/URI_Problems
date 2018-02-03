#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,k,p=0,fru=0,i;
    double tot_amount=0.0,amount;
    char foll[100000];
    cin>>t;
    k=t;
    int fruit[k];
    while(t--)
    {
        cin>>amount;
        tot_amount+=amount;
        getchar();
        gets(foll);
        fruit[p]=1;
        for(i=0;i<strlen(foll);i++){
            if(foll[i]==' ')
                 fruit[p]++;
        }
        printf("day %d: %d kg\n",p+1,fruit[p]);
        fru=fru+fruit[p];
        p++;
    }
    printf("%.2lf kg by day\n",(double)fru/(double)k);
    printf("R$ %.2lf by day\n",tot_amount/(double)k);
    return 0;
}
