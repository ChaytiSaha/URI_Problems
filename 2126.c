#include<stdio.h>
#include<string.h>
int main()
{
    int alen,blen,i,j,r,cnt,d,pos,loc,cas=1;
    char a[100],b[100];
    while(scanf("%s%s",a,b)!=EOF)
    {
        cnt=0; alen=strlen(a); blen=strlen(b);
        for(i=0;i<=blen-alen;i++)
        {
            if(b[i]==a[0])
            {
                r=1;d=1;pos=i+1;
                for(j=i+1;a[d];j++,d++)
                {
                    if(a[d]==b[j]) r++;
                    else break;
                }
                if(r==alen){
                    cnt++;
                    loc=pos;
                }
            }
        }
         printf("Caso #%d:\n", cas);
        if(cnt == 0) printf("Nao existe subsequencia\n\n");
        else{
            printf("Qtd.Subsequencias: %d\n", cnt);
            printf("Pos: %d\n\n", loc);
        }
        cas++;
    }
    return 0;
}
