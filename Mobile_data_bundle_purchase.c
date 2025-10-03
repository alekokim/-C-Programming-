// C Program for Mobile Data Bundle Purchase
/*
Name: Alex Kimana Wanjiku 
Reg No: CT100/G/26186/25
Description: Program for selected data bundles
*/
#include <stdio.h>

int main() {
    int choice;

    // display menu
    printf("Mobile Data Bundle Menu:\n");
    printf("1. 100MB - 50 KES\n");
    printf("2. 500MB - 200 KES\n");
    printf("3. 1GB - 350 KES\n");
    printf("4. 2GB - 600 KES\n");

    // prompt the user to enter choice
    printf("Enter choice (1-4): ");
    scanf("%d", &choice);

    // statement to display selected bundles
    switch(choice) {
        case 1:
            printf("You selected 100MB - Cost: 50 KES\n");
            break;
        case 2:
            printf("You selected 500MB - Cost: 200 KES\n");
            break;
        case 3:
            printf("You selected 1GB - Cost: 350 KES\n");
            break;
        case 4:
            printf("You selected 2GB - Cost: 600 KES\n");
            break;
        default:
            printf("Invalid choice: Please select between 1 and 4\n");
    }

    return 0;
}    
