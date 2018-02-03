#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,t,j,good=0,bad=0;
    cin>>t;
    char name[t][50],temp[50];
    char sign,dot;
    while(i<t)
    {
        cin.ignore();
        scanf("%c%c%s",&sign,&dot,name[i]);
        if(sign=='+')good++;
        else if(sign=='-') bad++;
        i++;
    }
    for(i=0;i<t;i++)
    {
        for(j=i+1;j<t;j++)
        {
            if((strcmp(name[i],name[j]))>0)
            {
                strcpy(temp,name[j]);
                strcpy(name[j],name[i]);
                strcpy(name[i],temp);
            }
        }
    }
    for(i=0;i<t;i++)
        cout<<name[i]<<endl;
    cout<<"Se comportaram: "<<good<<" | Nao se comportaram: "<<bad<<endl;
    return 0;
}
