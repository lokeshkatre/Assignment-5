#include<stdio.h>
int main()
{
    int num;
    printf("Enter first natural number to print cube:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        printf("%d*%d*%d=%d\n",i,i,i,i*i*i);
    }
    return 0;
}