#include <stdio.h>

int main() 
{
    int n, i, num, sum = 0;
    float mean;

    printf("Enter how many values: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum = sum + num;
    }

    
    mean = sum / (float)n;

    
    printf("Sum of %d values = %d\n", n, sum);
    printf("Mean of %d values = %.2f\n", n, mean);

    return 0;
}