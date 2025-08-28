#include<stdio.h>
int main()
{
    float grosssales;
    printf("enter the value of gross sales:\n");
    scanf("%f",&grosssales);
    float onepercent=grosssales*1/100;
    float discount=onepercent*10;
    float netsales=grosssales-discount;
    printf("the value of the net salary is %f",netsales);
    return 0;
}