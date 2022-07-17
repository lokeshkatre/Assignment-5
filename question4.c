#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of first odd number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d ",2*i-1);
    }
    return 0;
}