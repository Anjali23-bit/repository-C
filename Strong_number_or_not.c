#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    f=f*i;
    return f;
}
int main()
{
  int sum=0,n,i,temp,rem=0;
  scanf("%d",&n);
  temp=n;
  while(n!=0)
  {
      rem=n%10;
      sum+=fact(rem);
      n=n/10;
  }
  if(sum==temp)
  printf("%d is strong.",temp);
  else
  printf("%d is not strong.",temp);
   return 0;
}
