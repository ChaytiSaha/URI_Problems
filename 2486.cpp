#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,i;
    while(1)
    {
        int tot=0;
        cin>>t;
        if(t==0) break;
        for(i=1;i<=t;i++)
        {
            cin>>x;
            getchar();
            char p[20];
            gets(p);
            if(!strcmp(p,"suco de laranja")) tot=tot+x*120;
            else if(!strcmp(p,"morango fresco")) tot=tot+x*85;
            else if(!strcmp(p,"mamao")) tot=tot+x*85;
            else if(!strcmp(p,"goiaba vermelha")) tot=tot+x*70;
            else if(!strcmp(p,"manga")) tot=tot+x*56;
            else if(!strcmp(p,"laranja")) tot=tot+x*50;
            else if(!strcmp(p,"brocolis")) tot=tot+x*34;
        }
        if(tot>130) cout<<"Menos "<<tot-130<<" mg"<<endl;
        else if(tot<110) cout<<"Mais "<<110-tot<<" mg"<<endl;
        else if(tot>110 and tot<130) cout<<tot<<" mg"<<endl;
    }
    return 0;
}
