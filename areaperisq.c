#include<stdio.h>
int main ()
{
    float a;
    printf("enter the sides of the square\n");
    scanf("%f", &a);
    float area=a*a;
    float perimeter=4*a;
    printf("the area of the square is:%f\n",area);
    printf("the perimeter of the square is:%f\n",perimeter);
    return 0;
}
