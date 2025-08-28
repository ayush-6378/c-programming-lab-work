#include<stdio.h>
int main()
{
    float a,b;
    printf("enter the value of base:\n");
    scanf("%f",&a);
    printf("enter the value of height:\n");
    scanf("%f",&b);
    float area=0.5*a*b;
    printf("the area of the triangle is:%f\n",area);
    return 0;
}