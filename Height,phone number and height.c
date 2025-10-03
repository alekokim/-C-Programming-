// Simple C program to inputs height, phone number, weight 
/*
Name: Alex
Reg: CT100/G/26186/25
Description: My height,phone number and weight
*/
#include <stdio.h>

int main() {
    int height;
    int phonenumber;
    int weight;

    printf("Enter your height: ");
    scanf("%d", &height);

    printf("Enter your phone number: ");
    scanf("%d", &phonenumber);

    printf("Enter your weight: ");
    scanf("%d", &weight);

    printf("Your height is %d M\n", height);
    printf("Your phone number is %d\n", phonenumber);
    printf("Your weight is %d kgs\n", weight);

    return 0;
}
