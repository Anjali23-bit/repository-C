#include<stdio.h>
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    f=f*i;
    return f;
}
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
    printf("factorial of large number is: %d ",fact(a[n-1]));
    return 0;
}
