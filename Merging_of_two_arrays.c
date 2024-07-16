#include<stdio.h>
int main()
{
    int a[10],b[20],c[20],i,j,n,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    for(i=0;i<n;i++)
     printf("%d ",a[i]);
     printf("\n");
    for(i=0;i<n;i++)
     scanf("%d",&b[i]);
    for(i=0;i<n;i++)
     printf("%d ",b[i]);
     printf("\n");
    for(i=0;i<n;i++)
    {
    printf("%d %d ",a[i],b[i]);
    }
    return 0;
}
