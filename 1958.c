#include <stdio.h>
int main()
{
    long double X;
    char s[120];
    scanf("%LE", &X);
    sprintf(s,"%LE", X);//sprintf(format,num,location) & it does not print anything , only converts numeric things to string . an
                       //it is necessary because we can't understand the sign of numeric things without converting then into string
    if(s[0] != '-') printf("+");
    printf("%.4LE\n", X);
    return 0;
    }

/*#include <stdio.h>

int main()
{
   int day, year;
   char week[20], month[20];
   char date[] =  "Saturday December 12 2016";

   sscanf( date, "%s %s %d  %d", week, month, &day, &year );

   printf("%s %d, %d = %s\n", month, day, year, week);

   return 0;
}
*/
