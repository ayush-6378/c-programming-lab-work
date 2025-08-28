#include<stdio.h>
int main()
{
    float a,b,c;
    float interest=a*b*c/100;
    printf("enter the value of principle;");
    scanf("%f", &a );
    printf("enter the value of rate:");
    scanf("%f", &b );
    printf("enter the value of time:");
    scanf("%f", &c );
    printf("the value of simple interest is %f",interest);
    return 0;
}