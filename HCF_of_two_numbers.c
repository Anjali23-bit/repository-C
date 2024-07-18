#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int min,n1,n2,hcf,i;
    scanf("%d %d",&n1,&n2);
    min=((n1<n2)?n1:n2);
   for(i=1;i<=min;i++)
   {
       if((n1%i==0)&&(n2%i==0))
       hcf=i;
   }
   printf("%d ",hcf);
   return 0;
}
