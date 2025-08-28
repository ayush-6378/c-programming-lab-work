#include<stdio.h>
int main()
{
    int $1=48;
    float dollar;
    printf("how much dollar do you have:\n");
    scanf("%f",&dollar);
    float dollar_into_rupees=dollar*$1;
    printf("the value of the dollar in rupees is: %f",dollar_into_rupees);
    return 0;

}