#include <stdio.h>

int main() 
{
    int i;
    char gender;
    int boys = 0, girls = 0;

    for(i = 1; i <= 50; i++) {
        printf("Enter gender of student %d (M/F): ", i);
        scanf(" %c", &gender); 

        if(gender == 'M' || gender == 'm') {
            boys++;
        } else if(gender == 'F' || gender == 'f') {
            girls++;
        } else {
            printf("Invalid input. Please enter M or F.\n");
            i--; 
        }
    }

    printf("\nTotal Boys: %d\n", boys);
    printf("Total Girls: %d\n", girls);

    return 0;
}