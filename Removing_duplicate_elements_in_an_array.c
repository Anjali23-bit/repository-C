#include<stdio.h>
int removeDuplicates(int arr[], int n)
{
    int temp[n];
    int i,j = 0;
    for (i = 0; i < n; i++)
        if (arr[i] != arr[i + 1])
            temp[j++] = arr[i];
    for (i = 0; i < j; i++)
       arr[i] = temp[i];
    return j;
}
int main()
{
    int a[10],b[20],i,j,n,count=0,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d ",&a[i]);
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
     n = removeDuplicates(a, n);
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
}
