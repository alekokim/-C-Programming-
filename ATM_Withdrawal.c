/*
Name:Alex Kimana Wanjiku 
Reg No:CT100/G/26186/25
Description:Program of ATM Withdrawal Using While Loop 
*/
#include <stdio.h>

int main() {
      float balance;

      // prompt the user to enter initial balance 
      printf("Enter your initial balance: ");
      scanf("%f", &balance);

      while (balance > 0) {
      float withdrawal_amount;

      // prompt the user to enter withdrawal amount 
      printf("Enter amount to withdraw: ");
      scanf("%f", &withdrawal_amount);

      // Check if withdrawal amount exceeds balance
      if (withdrawal_amount > balance) {
      printf("Insufficient funds. Withdrawal denied.\n");
      } else {
      balance -= withdrawal_amount;
      printf("Withdrawal successful. Remaining balance: $%.2f\n", balance);}
      }

    return 0;
}