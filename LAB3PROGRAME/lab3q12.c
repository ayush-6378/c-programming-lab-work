#include <stdio.h>

int main() 
{
    int n, i;
    printf("Enter how many times to print your name: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        printf("Ayush\n");
    }

    return 0;
}