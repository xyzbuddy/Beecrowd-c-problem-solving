#include<stdio.h>
int main()
{
    double A,B,C,averge;
    scanf("%lf %lf %lf",&A,&B,&C);
    averge=(A*2+B*3+C*5)/(2+3+5);
    printf("MEDIA = %.1lf\n",averge);
    return 0;
}