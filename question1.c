#include<stdio.h>
float CircleArea(float r)
{
    float area;
    area=3.14*r*r;
    return area;
}
int main()
{
    float radius;
    printf("Enter the radius:");
    scanf("%f",&radius);
    printf("The area of circle is %.2f",CircleArea(radius));
    return 0;
}