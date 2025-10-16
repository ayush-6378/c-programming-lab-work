#include <stdio.h>

int main() 
{
    int n, i, count = 0;

    printf("Enter how many even numbers to print: ");
    scanf("%d", &n);

    for(i = 2; count < n; i += 2) {
        printf("%d\n", i);
        count++; 
    }

    return 0;
}