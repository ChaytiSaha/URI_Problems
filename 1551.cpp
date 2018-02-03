#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, i, size, r;
	char s[1001];
	cin >> n;
	cin.ignore(); /// here cin.ignore() works as like as getchar();
	while(n--)
	{
		gets(s);
		int alpha[150];
		memset(alpha, 0, sizeof(alpha));
		size = strlen(s);
		r = 0;
		for (i = 0; i < size; ++i)
		{
			if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z'))
            {
                if(islower(s[i])) s[i]=toupper(s[i]);
                {
                    alpha[(int)s[i]]++;
                }
            }
		}

        for(i=65;i<=90;i++)
            if(alpha[i]>0)r++;

		if(r == 26) cout << "frase completa" << endl;
		else{
			if(r > 13) cout << "frase quase completa" << endl;
			else cout << "frase mal elaborada" << endl;
		}

	}
	return 0;
}
