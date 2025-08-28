#include<stdio.h>
int main()
{
    float hours,miniutes;
    printf("enter the value of miniutes:\n");
    scanf("%f",&miniutes);
    hours=miniutes/60;
    printf("the value of hours is %f",hours);
    return 0;
}