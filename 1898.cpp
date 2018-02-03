#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[65],b[65],cpf[12],num1[60],num2[60];
    gets(a);
    gets(b);
    int i,j=0,cnt=0,alt=0,l=1,k;
    for(i=0,k=0,alt=0;a[i];i++)
    {
        if(a[i]>='0' && a[i]<='9' && cnt<11)
        {
            cpf[j++]=a[i];
            cnt++;
        }
        else if(a[i]>='0' and a[i]<='9' or a[i]=='.')
        {
            num1[k++]=a[i];
            if(a[i]=='.')l=k;
    }

    for(i=0,k=0,alt=0;b[i];i++)
    {
        if(b[i]>='0' and b[i]<='9' || b[i]=='.')
            num2[k++]=a[i];
    }

    puts(cpf);
    puts(num1);
    puts(num2);
    return 0;
}
