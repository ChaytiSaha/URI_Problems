#include <bits/stdc++.h>
using namespace std;
int main()
{
	int cpf[11], i, d, b1, b2;
	char line[20];
	while(gets(line))
    {
	   i = 0; d=0;
	   while(line[i]!=NULL)
	   {
	      if(line[i] != '.' && line[i] != '-')
	          cpf[d++] = ((int)line[i])-48;
	   i++;
	   }
	   b1 = 0; b2 = 0;
	   for(i = 0; i < 9; i ++)
	   {
            b1 += (i+1) * cpf[i];
            b2 += (9-i) * cpf[i];
       }
       b1 = (b1%11)%10;
	   b2 = (b2%11)%10;
	   if(b1 == cpf[9] && b2 == cpf[10])
           cout << "CPF valido" << endl;
	   else
	       cout << "CPF invalido" << endl;
	}
	return 0;
}
