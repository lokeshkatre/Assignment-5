#include<stdio.h>
int main()
{
    int num;
    printf("Enter number to find table:");
    scanf("%d",&num);
    for(int i=1;i<=10;i++)
    {
        printf("%d ",num*i);
    }
    return 0;
}