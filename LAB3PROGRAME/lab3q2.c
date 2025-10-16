#include <stdio.h>

int main() 
{
    int i, count = 0;
    for(i = 1; count < 10; i += 2) {
        printf("%d\n", i);
        count++; 
    }
    return 0;
}