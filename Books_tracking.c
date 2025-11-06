/*
NAME:ALEX KIMANA WANJIKU
REG NO:CT100/G/26186/25
Description: A C Program For Tracking Borrowed Books
*/
#include <stdio.h>

int main() {
    FILE *file;
    char title[100];

    file = fopen("borrowed_books.txt", "a"); 
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter book title: ");
    fgets(title, sizeof(title), stdin); 

    fprintf(file, "%s", title); 
    fclose(file);

    printf("Book title successfully stored in borrowed_books.txt\n");
    return 0;
}