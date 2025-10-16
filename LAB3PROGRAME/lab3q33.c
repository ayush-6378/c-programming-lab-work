#include <stdio.h>

int main() {
    int num, square, temp, count = 0, lastDigits;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;
    temp = num;

    
    while(temp > 0) {
        count++;
        temp = temp / 10;
    }


    int divisor = 1;
    for(int i = 1; i <= count; i++) {
        divisor = divisor * 10;
    }

    lastDigits = square % divisor;

    
    if(lastDigits == num) {
        printf("%d is an automorphic number.\n", num);
    } else {
        printf("%d is not an automorphic number.\n", num);
    }

    return 0;
}