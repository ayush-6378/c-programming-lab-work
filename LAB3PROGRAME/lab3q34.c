#include <stdio.h>

int main() 
{
    int n, i;
    int a = 0, b = 1, next;

    
    printf("Enter how many Fibonacci numbers to print: ");
    scanf("%d", &n);

    printf("Fibonacci series up to %d terms:\n", n);

    
    for(i = 1; i <= n; i++) {
        printf("%d\n", a);
        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}