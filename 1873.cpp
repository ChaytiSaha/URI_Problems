#include<bits/stdc++.h>
using namespace std;
int main()
{
        int t;
        cin>>t;
		char a[50], b[50];
		while(t--)
        {
			cin>>a>>b;

			if(strcmp(a,b)==0) cout<<"empate"<<endl;
			else if(  strcmp(a,"tesoura")==0  &&   strcmp(b,"papel")==0) cout<<"rajesh"<<endl;
			else if(  strcmp(a,"papel")==0    &&   strcmp(b,"pedra")==0) cout<<"rajesh"<<endl;
			else if(  strcmp(a,"pedra")==0    &&   strcmp(b,"lagarto")==0) cout<<"rajesh"<<endl;
			else if(  strcmp(a,"lagarto")==0  &&   strcmp(b,"spock")==0) cout<<"rajesh"<<endl;
			else if(  strcmp(a,"spock")==0    &&   strcmp(b,"tesoura")==0) cout<<"rajesh"<<endl;
			else if(  strcmp(a,"tesoura")==0  &&   strcmp(b,"lagarto")==0) cout<<"rajesh"<<endl;
			else if(  strcmp(a,"lagarto")==0  &&   strcmp(b,"papel")==0) cout<<"rajesh"<<endl;
			else if(  strcmp(a,"papel")==0    &&   strcmp(b,"spock")==0) cout<<"rajesh"<<endl;
			else if(  strcmp(a,"spock")==0    &&   strcmp(b,"pedra")==0) cout<<"rajesh"<<endl;
			else if(  strcmp(a,"pedra")==0    &&   strcmp(b,"tesoura")==0) cout<<"rajesh"<<endl;
			else cout<<"sheldon"<<endl;
		}
    return 0;
}
