#include<stdio.h>
int main()
{
    float sub1,sub2,sub3;
    printf("enter the mars of sub1;\n");
    scanf("%f",&sub1);
    printf("enter the mars of sub2;\n");
    scanf("%f",&sub2);
    printf("enter the mars of sub3;\n");
    scanf("%f",&sub3);
    float avg=(sub1+sub2+sub3)/3;
    printf("the value of the average is %f",avg);
    float total=sub1+sub2+sub3;
    printf("\nthe value of the total is %f",total);
    return 0;
}