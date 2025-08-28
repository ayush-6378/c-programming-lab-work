#include<stdio.h>
int main()
{
    float grams;
    printf("how much grams do you have:\n");
    scanf("%f",&grams);
    float kg=grams/1000;
    printf("the value of the grams into kg is %f",kg);
    return 0;
}