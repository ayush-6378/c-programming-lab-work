#include <stdio.h>

int main() 
{
    int n, i, count = 0, sum = 0;
    printf("Enter how many odd numbers to sum: ");
    scanf("%d", &n);

    for(i = 1; count < n; i += 2) {
        sum = sum + i;
        count++; 
    }
    printf("Sum of first %d odd numbers is: %d\n", n, sum);

    return 0;
}