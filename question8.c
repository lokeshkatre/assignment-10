#include<stdio.h>
int fact(int n)
{
    int fact=1;
    if(n==0)
    fact=1;
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if(i==1)
            fact=1;
            else
            fact=fact*i;
        }
        
    }
    return fact;
}
int arrangment(int n,int r)
{
    return (fact(n)/(fact(n-r)*fact(r)))*fact(r);
}
int main()
{
    int n,r;
    printf("Enter no. of objects:");
    scanf("%d",&n);
    printf("Enter no. of objects selected at a time:");
    scanf("%d",&r);
    printf("\nnumber of ways selected objects can be arranged are %d",arrangment(n,r));
    return 0;
}