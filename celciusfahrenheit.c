#include<stdio.h>
int main()
{
    float celsius;
    printf("how much celsius do you have:\n");
    scanf("%f",&celsius);
    float fahrenheit=(celsius*9/5)+32;
    printf("the value of the fahrenheit into celsius is %f",fahrenheit);
    return 0;
}