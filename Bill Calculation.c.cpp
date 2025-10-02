// A C Program to Calculate Water Bill
/*
Name: Alex Kimana Wanjiku 
Reg No: CT100/G/26186/25
Description: Program to calculate water bill
*/

#include <stdio.h>

int main() {
    int units;
    float bill;

    // Prompt user to enter units
    printf("Enter the number of water units: ");
    scanf("%d", &units);

    // Calculating the bill
    if (units <= 30) {
        bill = units * 20;
    } else if (units <= 60) {
        bill = (30 * 20) + ((units - 30) * 25);
    } else {
        bill = (30 * 20) + (30 * 25) + ((units - 60) * 30);
    }

    printf("Total water bill = %.2f\n", bill);
    return 0;
}