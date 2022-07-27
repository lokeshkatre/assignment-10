#include<stdio.h>
int digitCheck(int n,int dig)
{
 int r;
    while(n>0)
    {
        r=n%10;
        if(r==dig){
            return 1;
        }
        else
        {
        n=n/10;
        }
    }
    return 0;
}
int main()
{
    int n,dig;
    printf("Enter number:");
    scanf("%d",&n);
    printf("Enter digit:");
    scanf("%d",&dig);
    if(digitCheck(n,dig)==1)
    printf("\nYes , digit is present");
    else
    printf("\nNo, digit is not present");
    return 0;
}