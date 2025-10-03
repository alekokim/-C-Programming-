// A simple C Program to check Eligibility
/*
Name: Alex Kimana Wanjiku
Reg No: CT100/G/26186/25
Description: Program to check eligibility for final exams
*/
#include<stdio.h>

int main() {
    float attendance, average;

    // input attendance   
    printf("enter attendance percentage: ");  
    scanf("%f", &attendance);  
    
    // input average marks  
    printf("enter average marks: ");  
    scanf("%f", &average);  
    
    // to check eligibility  
    if (attendance >= 75 && average >= 40) {  
        printf("eligible for final exams\n");  
    } else {  
        printf("not eligible for final exams\n");
        }  
    
    return 0;  
}
