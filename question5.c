#include<stdio.h>
int main()
{
    int n;
    printf("Enter first no. of odd natural number to print in reverse:");
    scanf("%d",&n);
    for(int i=n;i>0;i--)
    {
        printf("%d ",2*i+1);
    }
    return 0;
}