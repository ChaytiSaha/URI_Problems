#include<stdio.h>
int main()
{
    int i,j;
    float x,SALARY;
    scanf("%d%d%f",&i,&j,&x);
    SALARY=(float)j*x;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n",i,SALARY);
    return 0;
}
