#include<stdio.h>
int main ()
{
    float a,b;;
    printf("enter the value of a:\n");
    scanf("%f",&a);
    printf("enter the value of b:\n");
    scanf("%f",&b);
    float sum=a+b;
    printf("the sum of a and b is %f\n",sum);
    float sub=a-b;
    printf("the substraction of a and b is %f\n",sub);
    float multiply=a*b;
    printf("the multiplication of a and b is %f\n",multiply);
    float division=a/b;
    printf("the division of a and b is %f\n",division);
    return 0;
    
}