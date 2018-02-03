#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a1;
    cin>>t;
    getchar();
    while(t--)
    {
        char a[6];
        gets(a);
        a1=strlen(a);
        if(a1 == 5) cout<<3<<endl;
        else
        {
            if(a[0]!='o'&& a[1]=='n'&& a[2]=='e')  cout<<1<<endl;
            else if(a[0]=='o'&& a[1]!='n' && a[2]=='e') cout<<1<<endl;
            else if(a[0]=='o'&& a[1]=='n' && a[2]!='e') cout<<1<<endl;
            else if(a[0]!='t'&& a[1]=='w' && a[2]=='o') cout<<2<<endl;
            else if(a[0]=='t'&& a[1]!='w' && a[2]=='o') cout<<2<<endl;
            else if(a[0]=='t'&& a[1]=='w' && a[2]!='o') cout<<2<<endl;
        }
    }
    return 0;
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,rept, aux = 0;
    char palavra[5], p0,p1,p2;
    scanf("%d", &rept);
    while(rept--){
        scanf("%s", palavra);
        if (strlen(palavra) == 5)
                aux = 3;
        else
            for (i = 0; i < 6; i++){
            if (palavra[i] == '\0')
                break;
            p0 = palavra[0];
            p1 = palavra[1];
            p2 = palavra[2];
        if ((p0 == 'o' && p1 == 'n') || (p0 == 'o' && p2 == 'e') || (p1 == 'n' && p2 == 'e'))
            aux = 1;
        else
            aux = 2;
        }
    printf("%d\n", aux);
    }
    return 0;
}
*/
