#include<stdio.h>
int main()
{
    int a[10],b[20],c[20],i,j,n,temp,mid=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    for(i=0;i<n;i++)
     printf("%d ",a[i]);
     printf("\n");
    mid=(n)/2;
    if(mid%2!=0)
    {
    for(i=0;i<=mid;i++)
    {
     for(j=i+1;j<=mid;j++)
     {
         if(a[i]>a[j])
         {
             temp=a[i];
             a[i]=a[j];
             a[j]=temp;
         }
     }
    }
    for(i=mid+1;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}
