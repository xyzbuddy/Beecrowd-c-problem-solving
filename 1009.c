#include <stdio.h>

int main()
{
    char name[1];
    double salary,selling,result;
    scanf("%s\n",name);
    scanf("%lf %lf",&salary,&selling);
    result = salary+(selling * 0.15);
    printf("TOTAL = R$ %0.2lf\n",result);

    return 0;
}