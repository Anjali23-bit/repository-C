#include<stdio.h>
int main()
{
    int a[10],b[20],i,j,n,count=0;
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
            if(a[i]==a[j])
            count++;
        }
    }
    printf("count of duplicate elements is: %d",count);
    return 0;
}
