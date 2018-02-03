#include<stdio.h>
int main()
{
    double a,b,c,d,Media,tm,avg;
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    Media=(a*2.0+b*3.0+c*4.0+d*1.0)/10.0;
    printf("Media: %.1lf\n",Media);
    if(Media>=7.0)
        printf("Aluno aprovado.\n");
    else if(Media<5.0)
        printf("Aluno reprovado.\n");
    else if(Media>=5.0&&Media<=6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%lf",&tm);
        printf("Nota do exame: %.1lf\n",tm);
        avg=(tm+Media)/2.0;
        if(avg>=5.0)
            printf("Aluno aprovado.\n");
        else if(avg<=4.9)
            printf("Aluno reprovado.\n");
        printf("Media final: %.1lf\n",avg);
    }
    return 0;
}
