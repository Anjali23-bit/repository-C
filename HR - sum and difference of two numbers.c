#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b,sum1,sub1;
    float c,d,sum2,sub2;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c ,&d);
    sum1= a+b;
    sub1= a-b;
    sum2= c+d;
    sub2= c-d;
    printf("%d %d\n",sum1,sub1);
    printf("%0.1f %0.1f",sum2,sub2);
    return 0;
}