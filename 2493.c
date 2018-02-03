#include<stdio.h>
#include<string.h>
int main()
{
    int t, i, j;
    scanf("%d",&t);
    long long x[t+1], y[t+1], z[t+1];
    int eqn[t+1], e[t+1], d=0,cnt=1;
    char name[t+1][500], actual[t+1][500],temp[500];

    for(i=1;i<=t;i++)
        scanf("%lld %lld=%lld",&x[i],&y[i],&z[i]);

    for(i=1;i<=t;i++)
        scanf("%s %d %c",name[i],&eqn[i],&e[i]);

    for(i=1;i<=t;i++)
    {
        if(e[i]=='+'){
            if((x[eqn[cnt]]+y[eqn[cnt]])!=z[eqn[cnt]])
                strcpy(actual[d++],name[eqn[cnt]]);}

        else if(e[i]=='-'){
            if((x[eqn[cnt]]-y[eqn[cnt]])!=z[eqn[cnt]])
                strcpy(actual[d++],name[eqn[cnt]]);}

        else if(e[i]=='*'){
            if((x[eqn[cnt]]*y[eqn[cnt]])!=z[eqn[cnt]])
                strcpy(actual[d++],name[eqn[cnt]]);}

        else if(e[i]=='I')
            strcpy(actual[d++],name[eqn[cnt]]);
        cnt++;
    }
    printf("%d",d);
    if(d==t) printf("None Shall Pass!\n");
    else if (d==0) printf("You Shall All Pass!\n");
    else
    {
        for(i=1;i<=d;i++)
            for(j=i+1;j<=d;j++)
                if(strcmp(actual[i],actual[j])>0)
                {
                    strcpy(temp,actual[i]);
                    strcpy(actual[i],actual[j]);
                    strcpy(actual[j],temp);
                }
        for(i=0;i<d;i++)
            if(i==0) printf("%s",actual[i]);
            else printf(" %s",actual[i]);

        printf("\n");
    }
    return 0;
}












































































































/*#include<stdio.h>
#include<string.h>
int main()
{
    int t,x[52],y[52],e[52],loc[50],cnt,j=0,i,a,k;
    char r[52],n[52][52],f[52];
    long long int z[52];
    while(scanf("%d",&t)!=EOF)
    {
        j=0; cnt=0;
        for(i=0; i<t; i++)
            scanf("%d %d=%lld",&x[i],&y[i],&z[i]);
        for(i=0; i<t; i++)
            scanf("%s %d %c",n[i],&e[i],&r[i]);
        for(i=0; i<t; i++)
        {
            a=e[i]-1;//printf("1\n");
            if(r[i]=='+')
            {//printf("2\n");
                if(x[a]+y[a]==z[a])
                    cnt++;
                else
                {//printf("3\n");
                    loc[j]=i;
                    j++;
                }
            }
            else if(r[i]=='-')
            {//printf("2\n");
                if(x[a]-y[a]==z[a]) cnt++;
                else loc[j++]=i;
            }
            else if(r[i]=='*')
            {//printf("2\n");
                if(x[a]*y[a]==z[a]) cnt++;
                else loc[j++]=i;
            }
            else if(r[i]=='I')
            {
                if(x[a]+y[a]==z[a]||x[a]-y[a]==z[a]||x[a]*y[a]==z[a])
                    loc[j++]=i;
                else cnt++;
            }
        }
        if(cnt==t) printf("You Shall All Pass!\n");
        else if(cnt==0) printf("None Shall Pass!\n");
        else
        {
            for(i=0; i<j; i++)
            {
                for(k=i+1;k<j;k++)
                if(strcmp(n[loc[i]],n[loc[k]])>0)
                    {
                        strcpy(f,n[loc[i]]);
                        strcpy(n[loc[i]],n[loc[k]]);
                        strcpy(n[loc[k]],f);
                    }
            }
            for(i=0;i<j;i++)
            {
                if(i==j-1) printf("%s\n", n[loc[i]]);
                else  printf("%s ", n[loc[i]]);
            }
        }
    }
    return 0;
}
*/
