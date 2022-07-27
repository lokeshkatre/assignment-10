#include<stdio.h>
float SimpleInterest(float P,float R,float T)
{
    float PI=(P*R*T)/100;
    return PI;
}
int main()
{
    float P,R,T;
    printf("Enter Principal amount:");
    scanf("%f",&P);
    printf("Enter rate:");
    scanf("%f",&R);
    printf("Enter Time in yrs:");
    scanf("%f",&T);
    printf("Principle interest is %.2f",SimpleInterest(P,R,T));
    return 0;
}