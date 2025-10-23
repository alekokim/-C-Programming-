/*
NAME:ALEKIMANA WANJIKU 
REG NO:CT100/G/26186/25
Description: Program for calculating electric bill
*/
#include <stdio.h>

// Function to calculate total electricity bill
float calculateElectricBill(int units) {
    float bill = 0;

    if (units <= 100) {
        bill = units * 10;
    }
    else if (units <= 200) {
        bill = (100 * 10) + ((units - 100) * 15);
    }
    else {
        bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    }

    return bill;
}

int main() {
    int units;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    float totalBill = calculateElectricBill(units);
    printf("Total Electricity Bill = KSh. %.2f\n", totalBill);

    return 0;
}