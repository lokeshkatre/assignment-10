#include <stdio.h>
int factorial(int n)
{
    int fact;
    if (n == 0 )
        fact = 1;
    else
    {
        for (int i =1; i <= n; i++)
        {
            if (i == 1)
                fact = 1;
            else
                fact = fact * i;
        }
    }
    return fact;
}
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    printf("%d!=%d",n,factorial(n));
    return 0;
}