#include <stdio.h>
void primeFactors(int n)
{
    int r = 2;
    while (n > 1)
    {
        if (n % r == 0)
        {
            if (r == 2)
                printf("%d ", r);
            else if (r == 3)
                printf("%d ", r);
            else
            {
                int flag = 0;
                for (int i = 2; i <= r / 2; i++)
                {
                    if (r % i == 0 && i != 1)
                    {
                        flag = 0;
                    }
                    else
                        flag = 1;
                }
                if (flag == 1)
                    printf("%d ", r);
            }
            n = n / r;
        }
        else
        {
            r++;
        }
    }
}
int main()
{
    int n;
    printf("Enter number:");
    scanf("%d", &n);
    primeFactors(n);
    return 0;
}