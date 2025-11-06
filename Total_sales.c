/*
NAME: ALEX KIMANA WANJIKU 
REG NO: CT100/G/26186/25
Description: Program to record and calculate total sales
*/
#include <stdio.h>

int main() {
    FILE *file;
    double transaction, totalSales = 0.0;

    // Open the file for reading
    file = fopen("sales.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read transactions and calculate total sales
    while (fscanf(file, "%lf", &transaction) == 1) {
        totalSales += transaction;
    }

    // Display total sales
    printf("Total sales for the day: %.2f\n", totalSales);

    // Close the file
    fclose(file);

    return 0;
}
