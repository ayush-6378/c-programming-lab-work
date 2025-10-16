#include <stdio.h>

int main() 
{
    int num, digit, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    
    int isNegative = 0;
    if(num < 0) {
        isNegative = 1;
        num = -num;
    }

    
    while(num > 0) {
        digit = num % 10;             
        reversed = reversed * 10 + digit; 
        num = num / 10;              
    }

    
    if(isNegative) {
        reversed = -reversed;
    }
    printf("Reversed number = %d\n", reversed);

    return 0;
}