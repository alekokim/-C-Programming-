/*
NAME:ALEKIMANA WANJIKU 
REG NO:CT100/G/26186/25
Description: Program to convert Fahrenheit to Celsius
*/
#include <stdio.h>

// Function to convert Fahrenheit to Celsius
double convertToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9.0;
}

int main() {
    double fahrenheit, celsius;

    // Ask user for input
    printf("Enter temperature in Fahrenheit: ");
    scanf("%lf", &fahrenheit);

    // Convert and display result
    celsius = convertToCelsius(fahrenheit);
    printf("%.2f°F is equal to %.2f°C\n", fahrenheit, celsius);

    return 0;
}