#include <stdio.h>
 int main()
 {
    double grade[5];
    char *sub[] = {"THAI","MATH","ENGLISH","SCIENCE","SPORT"};
    double sum=0;
    scanf("%lf",&grade[0]);
    scanf("%lf",&grade[1]);
    scanf("%lf",&grade[2]);
    scanf("%lf",&grade[3]);
    scanf("%lf",&grade[4]);
    for(int j = 0;j<5;j++)
    {
        sum += grade[j];
    }
    for(int i=0;i<5;i++)
      {
        printf("%s = %.1f\n",sub[i],grade[i]);
      }
   printf("---\n");
   printf("GPA = %.1f",sum / 5.0);
    return 0;
 }

