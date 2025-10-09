/*
Name:Alex Kimana Wanjiku 
Reg No:CT100/G/26186/25
Description:Program for Password Verification Using Do While 
*/
#include <stdio.h>

int main() {
        int password;

        do {
        printf("Enter password: ");
        scanf("%d", &password);

        if (password != 1234) {
            printf("Incorrect password. Try again.\n");
        }

        } while (password != 1234);

        printf("Access Granted.\n");
 
        return 0;
}