/* 
Name:Alex Kimana Wanjiku 
Reg No:CT100/G/26186/25
Description:Program for Number Guessing Name
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
       // Generate a random number between 1 and 20
       srand(time(NULL)); // seed the random number generator
       int secret_number = rand() % 20 + 1;

       int guess;
       int attempts = 0;

       printf("Welcome to the number guessing game!\n");
       printf("I'm thinking of a number between 1 and 20.\n");

       while (1) {
        // Ask the player for their guess
        printf("Enter your guess: ");
        scanf("%d", &guess);

        // Check if the guess is valid
        if (guess < 1 || guess > 20) {
        printf("Invalid guess! Please enter a number between 1 and 20.\n");
        continue;
        }

        attempts++;

        // Check if the guess is correct
        if (guess == secret_number) {
        printf("Congratulations! You found the number in %d attempts.\n", attempts);
        break;
        } else if (guess > secret_number) {
        printf("Too high!\n");
        } else {
        printf("Too low!\n");}
        }

       return 0;
}