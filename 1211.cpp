#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while(scanf("%d",&t)!=EOF)
    {
        int i,c,rest=0,j;
    string x[t];
    for(i=0;i<t;i++)
        cin>>x[i];
    for(i=1;i<t;i++)
    {
//        if(x[i][0]!=x[i-1][0]) break;
        for(j=0,c=0;x[i][j];j++)
        {
            if(x[i][j]==x[i-1][j]) c++;
            else break;
        }
        if(c>rest) rest=c;
    }
    cout<<rest<<endl;
    }
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;
int i, j, sz;
bool compare(string a, string b)
{
	sz = a.length();

	for (i = 0; i < sz; ++i)
	{
		if(a[i] < b[i]) return 1;
		if(a[i] > b[i]) return 0;
	}

	return 1;
}
int main(int argc, char const *argv[])
{
	int n, l, c;
	char s[205];
	string base;
	while(scanf("%d", &n) == 1)
	{
		vector<string> v;
		c = 0;
		for (i = 0; i < n; ++i)
		{
			scanf("%s", s);
			v.push_back(s);
		}
		sort(v.begin(), v.end(), compare);
		base = v[0];
		l = base.length();
		for (i = 1; i < n; ++i)
		{
			for (j = 0; j < l; ++j)
			{
				if(base[j] == v[i][j]) c++;
				else break;
			}
			base = v[i];
		}
		printf("%d\n", c);
	}
	return 0;
}
*/
