#include <stdio.h>

int main() 
{
    int i, num;
    int positive = 0, negative = 0, zero = 0;
    for(i = 1; i <= 200; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if(num > 0) {
            positive++;
        } else if(num < 0) {
            negative++;
        } else {
            zero++;
        }
    }
    printf("\nTotal Positive numbers: %d\n", positive);
    printf("Total Negative numbers: %d\n", negative);
    printf("Total Zeros: %d\n", zero);

    return 0;
}