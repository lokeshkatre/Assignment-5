#include<stdio.h>
int main()
{
    int num;
    printf("Enter number first natural number to print in reverse:");
    scanf("%d",&num);
    for (int i = num; i >0; i--)
    {
        printf("%d ",i);
    }
    
    return 0;
}