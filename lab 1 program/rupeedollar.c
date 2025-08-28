#include<stdio.h>
int main()
{
    int $1=48;
    float rupees;
    printf("how much rupees do you have:\n");
    scanf("%f",&rupees);
    float rupee_into_dollar=rupees/$1;
    printf("the value of the rupees into dollar is %f",rupee_into_dollar);
    return 0;

}