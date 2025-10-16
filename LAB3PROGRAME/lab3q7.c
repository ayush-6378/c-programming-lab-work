#include <stdio.h>

int main() 
{
    int n, i, sum = 0;
    printf("Enter how many natural numbers to sum: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        sum = sum + i;
    }
    printf("Sum of first %d natural numbers is: %d\n", n, sum);

    return 0;
}