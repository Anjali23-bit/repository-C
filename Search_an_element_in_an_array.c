#include<stdio.h>
int main()
{
    int a[10][10],s,i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        printf("%d ",a[i][j]);
        printf("\n");
    }
scanf("%d",&s);
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(s==a[i][j])
            printf("%d is present",s);
    }
}
}
