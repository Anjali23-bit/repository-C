#include<stdio.h>
int main()
{
    int a[10],b[20],c[20],i,j,n,temp=0,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    for(i=0;i<n;i++)
     printf("%d ",a[i]);
     printf("\n");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
         count++;
        else
         temp++;
    }
        printf("even numbers: %d\n",count);
        printf("odd numbers: %d ",temp);
    return 0;
}
