#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[52];
    while(gets(ch)!=NULL)
    {
        int i=0,c=0,d=0;
        while(ch[i]!='\0')
        {
            if(ch[i]=='_' and c==0)
            {
                printf("<i>");
                c=1;
            }
            else if(ch[i]=='_' and c==1)
            {
                printf("</i>");
                c=0;
            }
            else if(ch[i]=='*' and d==0)
            {
                printf("<b>");
                d=1;
            }
            else if(ch[i]=='*' and d==1)
            {
                printf("</b>");
                d=0;
            }
            else printf("%c",ch[i]);
            i++;
        }
        printf("\n");
    }
    return 0;
}
