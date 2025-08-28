#include<stdio.h>
int main()
{
    float kg;
    printf("how much kg do you have:\n");
    scanf("%f",&kg);
    float grams=kg*1000;
    printf("the value of the grams into kg is %f",grams);
    return 0;
}