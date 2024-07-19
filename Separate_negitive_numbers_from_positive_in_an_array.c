#include<stdio.h>
int main()
{
    int a[20],b[20],c[20],i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    printf("\n");
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        printf("%d ",a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>=0)
        printf("%d ",a[i]);
    }
}
