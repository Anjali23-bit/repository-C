#include <stdio.h>
void rotate(int a[], int n, int k)
{
int i;
    k = k % n;
    int temp[20];
    for(i=0;i<k;i++)
    {
        temp[i]=a[n-k+i];
    }
    for(i=n-1;i>= k;i--)
    {
        a[i]=a[i-k];
    }
    for(i=0;i<k;i++)
    {
        a[i]=temp[i];
    }
}
int main()
{
    int n,a[20],i,k;
    //printf("Enter the size of the array: ");
    scanf("%d", &n);
    //printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
        printf("\n");
    //printf("Enter the number of positions to rotate: ");
    scanf("%d", &k);
    rotate(a, n, k);
    printf("Rotatedarrayis: ");
    for(i=0;i<n;i++)
    printf(" %d ",a[i]);
    return 0;
}
