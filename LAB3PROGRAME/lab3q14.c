#include <stdio.h>

int main() 
{
    int i, num, sum = 0;
    float mean;
    for(i = 1; i <= 10; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum = sum + num;
    }
    mean = sum / 10.0;
    printf("Sum of 10 values = %d\n", sum);
    printf("Mean of 10 values = %.2f\n", mean);

    return 0;
}