#include<stdio.h>
int main()
{
    int a[10],b[20],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    for(i=0;i<n;i++)
     printf("%d ",a[i]);
     printf("\n");
    for(i=0;i<n;i++)
     b[i]=a[i];
     printf("copy of array is: ");
    for(i=0;i<n;i++)
    printf("%d ",b[i]);
    return 0;
}
