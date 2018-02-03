#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,s=1,i;
    while(cin>>t && t!=0)
    {
        int a[t],b[t],main[t],l,j;
        double sum=0.0;
        for(i=0;i<t;i++)
        {
            cin>>a[i]>>l;
            b[i]=l/a[i];
            sum=sum+(double)b[i]/(double)a[i];
            main[i]=a[i];
        }
        sort(a,a+i);
        cout<<"Cidade# "<<s++<<":"<<endl;
        for(i=0;i<t;i++)
        {
            printf("%d-",a[i]);
            for(j=0;j<t;j++)
            {
                if(a[i]==main[j])
                {
                    printf("%d",b[j]);
                }
            }
            if(i!=t-1) cout<<" ";
            else cout<<endl;
        }
        printf("Consumo medio: %.2lf m3.\n",sum);
    }
    return 0;
}
