#include <stdio.h>
#include <string.h>
int main()
{
	int n, t, i, s, p;
	char c, str[20];
    int inc[26],cor[26];
	while(scanf("%d", &n) && n)
	{
		s = 0; p = 0;
		memset(inc, 0, sizeof(inc));
		memset(cor, 0, sizeof(cor));
		for (i = 0; i < n; ++i)
		{
			getchar();
			scanf("%c %d %s", &c, &t, &str);
			if(strcmp("correct", str) == 0 && cor[(int)c - 65] == 0)
				cor[(int)c - 65] = t;
			if(strcmp("incorrect", str) == 0 && cor[(int)c - 65] == 0)
				inc[(int)c - 65] += 20;
		}
		for (i = 0; i < 26; ++i)
		{
			if(cor[i] != 0){
				s++;
				p += (cor[i] + inc[i]);
			}
		}
		printf("%d %d\n", s, p);
	}
	return 0;
}
