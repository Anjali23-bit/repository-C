#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int max,n1,n2;
    scanf("%d %d",&n1,&n2);
    max=((n1>n2)?n1:n2);
    while(1)
    {
        if((max%n1==0)&&(max%n2==0))
        {
            printf("%d ",max);
            break;
        }
    }
    max++;
}
