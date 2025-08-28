#include<stdio.h>
int main()
{
    float grosssalary;
    printf("enter the value of gross salary:\n");
    scanf("%f",&grosssalary);
    float onepercent=grosssalary*1/100;
    float allowance=onepercent*10;
    float deduction=onepercent*3;
    float netsalary=grosssalary+allowance-deduction;
    printf("the value of the net salary is %f",netsalary);
    return 0;
}