#include <stdio.h>
 int main()
 {
    double a1,a2,a3,a4,a5;
    double sum=0;
    scanf("%lf",&a1);
    scanf("%lf",&a2);
    scanf("%lf",&a3);
    scanf("%lf",&a4);
    scanf("%lf",&a5);
    sum = sum+a1+a2+a3+a4+a5;
    printf("THAI = %.1f\n",a1);
    printf("MATH = %.1f\n",a2);
    printf("ENGLISH = %.1f\n",a3);
    printf("SCIENCE = %.1f\n",a4);
    printf("SPORT = %.1f\n",a5);
   printf("---\n");
   printf("GPA = %.1f",sum / 5.0);
    return 0;
 }
