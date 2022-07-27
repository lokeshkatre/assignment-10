#include<stdio.h>
void printOdd(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ",2*i+1);
    }
    
}
int main()
{
    int n;
    printf("Enter no of first odd number:");
    scanf("%d",&n);
    printOdd(n);
    return 0;
}