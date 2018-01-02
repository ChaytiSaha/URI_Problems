#include<stdio.h>
int main()
{
    int x,y,z,m;
    scanf("%d%d%d",&x,&y,&z);
    m=(x==y)?((x==z)?x:((x>z)?x:z)):(((x>y)?((x>z)?x:z):((y>z)?y:z)));
    printf("%d eh o maior\n",m);
    return 0;
}
