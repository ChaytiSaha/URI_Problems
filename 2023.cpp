/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k=0;
    char ara[1002][100],temp[1002];
    while(scanf("%s",ara[k])!=EOF)
    {
        k++;
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(strcmp(ara[i],ara[j])>0)
            {
                strcpy(temp,ara[j]);
                strcpy(ara[j],ara[i]);
                strcpy(ara[i],temp);
            }
        }
    }
    }
    for(i=0;i<k;i++)
        puts(ara[i]);
    return 0;
}
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

typedef struct p {
	string name;
	string modi;
} p;

p names[1001];

bool cmp(p s1, p s2) {
	string a = s1.modi;
	string b = s2.modi;
	int i = 0;

	while (a[i] == b[i])
		i++;
	if (a[i] < b[i]) return true;
	else return false;
}

int main() {
	int z = 0;
	string name;

	int i = 0;
	while (getline(cin, name)) {
		names[i].name = name;
		transform(name.begin(), name.end(), name.begin(), ::tolower);
		names[i].modi = name;
		i++;
	}

	sort(names, names + i, cmp);

	cout << names[i - 1].name << endl;
	return 0;
}
