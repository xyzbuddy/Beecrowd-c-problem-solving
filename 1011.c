#include<stdio.h>
 int main(){

  double R;
  double sum;
   scanf("%lf",&R);

   sum= (4/3.0)*3.14159*(R*R*R);
   
   printf("VOLUME = %.3lf\n",sum);

 return 0 ;
 }