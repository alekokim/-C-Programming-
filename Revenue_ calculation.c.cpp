/*
NAME:ALEX KIMANA WANJIKU 
REG NO:CT100/G/26186/25
Description: Program to calculate revenue 
*/

#include <stdio.h>

int main() {
    float revenue[7]; 
    float total = 0, average;
    int i;

    // Input revenue for each day
    printf("Enter the revenue for each day of the week:\n");
    for(i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i]; // Accumulate total revenue
    }

    // Calculate average
    average = total / 7;

    // Display results
    printf("\nTotal weekly revenue: %.2f\n", total);
    printf("Average daily revenue: %.2f\n", average);

    return 0;
}