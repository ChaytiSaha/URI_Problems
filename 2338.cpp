#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    char morse[10000];
    while(t--)
    {
        getchar();
        cin>>morse;
        for(int i=0;morse[i]!='\0';)
        {
            if(morse[i]=='.'&&morse[i+1]=='.'&&morse[i+2]=='.') i=i+3;

            else if(morse[i]=='.'&&morse[i+1]=='.'&&morse[i+2]=='.'&&
                    morse[i+3]=='.'&&morse[i+4]=='.'&&morse[i+5]=='.'&&morse[i+6]=='.'){cout<<" "; i=i+7;}

            else if(morse[i]=='='&&morse[i+1]=='.'&&morse[i+2]=='='&&morse[i+3]=='='&&morse[i+4]=='='){cout<<"a"; i=i+5;}

            else if(morse[i]=='='&&morse[i+1]=='='&&morse[i+2]=='='&&morse[i+3]=='.'&&
                    morse[i+4]=='='&&morse[i+5]=='.'&&morse[i+6]=='='&&morse[i+7]=='.'&&morse[i+8]=='='){cout<<"b"; i=i+9;}

            else if(morse[i]=='='&&morse[i+1]=='='&&morse[i+2]=='='&&morse[i+3]=='.'&&
                    morse[i+4]=='='&&morse[i+5]=='.'&&morse[i+6]=='='&&morse[i+7]=='='&&morse[i+8]=='='
                    &&morse[i+9]=='.'&&morse[i+10]=='='){ cout<<"c"; i=i+11;}

            else if(morse[i]=='='&&morse[i+1]=='='&&morse[i+2]=='='&&morse[i+3]=='.'&&
                    morse[i+4]=='='&&morse[i+5]=='.'&&morse[i+6]=='='){ cout<<"d"; i=i+7;}

            else if(morse[i]=='='&&((morse[i+1]=='.'&&morse[i+2]=='.'&&morse[i+3]=='.'))){ cout<<"e"; i=i+1;}

            else if(morse[i]=='='&&morse[i+1]=='.'&&morse[i+2]=='='&&morse[i+3]=='.'&&morse[i+4]=='='&&morse[i+5]=='='
                    &&morse[i+6]=='='&&morse[i+7]=='.'&&morse[i+8]=='='){ cout<<"f"; i=i+9;}

            else if(morse[i]=='='&&morse[i+1]=='='&&morse[i+2]=='='&&morse[i+3]=='.'&&
                    morse[i+4]=='='&&morse[i+5]=='='&&morse[i+6]=='='&&morse[i+7]=='.'&&morse[i+8]=='='){cout<<"g"; i=i+9;}

            else if(morse[i]=='='&&morse[i+1]=='.'&&morse[i+2]=='='&&morse[i+3]=='.'&&morse[i+4]=='='
                    &&morse[i+5]=='.'&&morse[i+6]=='='){ cout<<"h"; i=i+7;}

            else if(morse[i]=='='&&morse[i+1]=='.'&&morse[i+2]=='='){ cout<<"i"; i=i+3;}
        }
        cout<<endl;
    }
    return 0;
}
