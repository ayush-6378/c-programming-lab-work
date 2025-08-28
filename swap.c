#include <stdio.h>
int main() 
{
    int a, b, temp;
    printf("Enter value of a:\n");
    scanf("%d",  &a);
    printf("enter the value of b:\n");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping:\n");
    printf("Value of a = %d\n", a);
    printf("Value of b = %d\n", b);
    return 0;
}