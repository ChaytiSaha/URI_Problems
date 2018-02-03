#include<stdio.h>
int main()
{
    int A,B,C;
    scanf("%d%d%d",&A,&B,&C);
    if((A-B)==0||(B-C)==0||(C-A)==0||((A+B)-C)==0||((B+C)-A)==0||((C+A)-B)==0)
        printf("%c\n",'S');
    else
        printf("%c\n",'N');
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a-b==0)cout<<"S"<<endl;
    else if(b-c==0)cout<<"S"<<endl;
    else if(c-a==0)cout<<"S"<<endl;
    else if((a+b)-c==0)cout<<"S"<<endl;
    else if((b+c)-a==0)cout<<"S"<<endl;
    else if((c+a)-b==0)cout<<"S"<<endl;
    else cout<<"N"<<endl;
    return 0;
}
