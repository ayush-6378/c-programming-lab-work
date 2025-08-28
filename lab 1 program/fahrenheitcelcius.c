#include<stdio.h>
int main()
{
    float fahrenheit;
    printf("how much fahrenheit do you have:\n");
    scanf("%f",&fahrenheit);
    float celsius=(fahrenheit-32)*5/9;
    printf("the value of the celsius into fahrenheit is %f",celsius);
    return 0;
}