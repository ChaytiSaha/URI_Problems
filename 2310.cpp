#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i=0,j,sum[3]={0},s[3]={0},k=0;
    cin>>t;
    char p[100];
    int a[3],b[3];
    while(i<t)
    {
        getchar();
        gets(p);
        for(j=0,k=0;j<3;j++,k++)
        {
            cin>>a[j];
            sum[k]+=+a[j];
        }
        for(j=0,k=0;j<3;j++,k++)
        {
            cin>>b[j];
            s[k]+=b[j];
        }
        i++;
    }
    printf("Pontos de Saque: %.2lf %%.\n",((double)s[0]/(double)sum[0])*100.0);
    printf("Pontos de Bloqueio: %.2lf %%.\n",((double)s[1]/(double)sum[1])*100.0);
    printf("Pontos de Ataque: %.2lf %%.\n",((double)s[2]/(double)sum[2])*100.0);
    return 0;
}
