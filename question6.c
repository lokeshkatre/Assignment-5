#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of first even numbers:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d ",2*i);
    }
    return 0;
}