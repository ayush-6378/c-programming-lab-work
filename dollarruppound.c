#include<stdio.h>
int main()
{
    int $1=48;
    float dollar;
    printf("how much dollar do you have:\n");
    scanf("%f",&dollar);
    float dollar_into_rupees=dollar*$1;
    float rupee_into_pound=dollar_into_rupees/70;
    printf("the value of the dollar into pound is %f\n",rupee_into_pound);
    return 0;

}