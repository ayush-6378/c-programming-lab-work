#include<stdio.h>
int main ()
{
    float a,b;
    printf("enter the value of length:\n");
    scanf("%f",&a);
    printf("enter the value of breadth:\n");
    scanf("%f",&b);
    float area=a*b;
    float perimeter=2*(a+b);
    printf("the area of the rectangle is:%f\n",area);
    printf("the perimeter of the rectangle is:%f\n",perimeter);
    return 0;
    
    
}