/*
NAME:ALEKIMANA WANJIKU 
REG NO:CT100/G/26186/25
Description:Program to calculate fare
*/
#include <stdio.h>

// Function to calculate fare
double calculateFare(double distance) {
    double farePerKm = 50.0; 
    return distance * farePerKm;
}

int main() {
    double distance; 
    double fare;

    // Ask user for distance
    printf("Enter distance travelled (in km): ");
    scanf("%lf", &distance);

    // Calculate fare
    fare = calculateFare(distance);

    // Display result
    printf("Total fare for %.2f km: KSh. %.2f\n", distance, fare);

    return 0;
}
