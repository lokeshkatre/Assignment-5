#include<stdio.h>
int main()
{
    int n;
    printf("Enter no. of first even number to print reverse order: ");
    scanf("%d",&n);
    for(int i=n;i>0;i--)
    {
        printf("%d ",2*i);
    }
    return 0;
}