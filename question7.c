#include <stdio.h>
int fact(int n)
{
    int fact=1;
    if (n == 0)
        fact = 1;
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (i == 1)
                fact = 1;
            else
                fact = fact * i;
        }
    }
    return fact;
}
int waysToSelect(int n, int r)
{
    int ways = fact(n) / (fact(n - r) * fact(r));
    return ways;
}
int main()
{
    int n, r;
    printf("Enter no. of elements:");
    scanf("%d", &n);
    printf("Enter no. of selecting objects:");
    scanf("%d", &r);
    
    printf("\nNumber of ways of selection is %d\n",waysToSelect(n,r));
    return 0;
}