#include<stdio.h>
int evenOdd(int n)
{
    if(n%2==0)
    return 1;
    else
    return 0;
}
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    printf("%d",evenOdd(n));
    return 0;
}