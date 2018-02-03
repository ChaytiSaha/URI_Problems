#include<stdio.h>
int main()
{
    char str[1002];
    while(scanf("%s",str)!=EOF)
    {
    int len,i=0,a[10]={0},tot,num;
    tot=0;num=0;
    len=strlen(str);
    while(i<len)
    {
        if(str[i]=='0')a[0]++;
        else if(str[i]=='1')a[1]++;
        else if(str[i]=='2')a[2]++;
        else if(str[i]=='3')a[3]++;
        else if(str[i]=='4')a[4]++;
        else if(str[i]=='5')a[5]++;
        else if(str[i]=='6')a[6]++;
        else if(str[i]=='7')a[7]++;
        else if(str[i]=='8')a[8]++;
        else if(str[i]=='9')a[9]++;
        i++;
    }
    tot=a[0];
    num=0;
    for(i=1;i<10;i++)
    {
        if(a[i]>=tot)
        {
            num=i;
            tot=a[i];
        }
    }
    printf("%d\n",num);
    }
    return 0;
}
