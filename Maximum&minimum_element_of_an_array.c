#include<stdio.h>
int main()
{
    int a[10],b[20],c[20],i,j,n,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    for(i=0;i<n;i++)
     printf("%d ",a[i]);
     printf("\n");
    for(i=0;i<n;i++)
    {
     for(j=i+1;j<n;j++)
     {
         if(a[i]>a[j])
         {
             temp=a[i];
             a[i]=a[j];
             a[j]=temp;
         }
     }
    }
    printf("sorted is:");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    printf("\nminimum is: %d\n",a[0]);
    printf("maximum is: %d ",a[n-1]);
    return 0;
}
