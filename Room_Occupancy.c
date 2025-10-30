/*
NAME: ALEKIMANA WANJIKU 
REG NO: CT100/G/26186/25
Description: Program to display number of occupied and vacant rooms per floor
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int occupancy[5][10]; 
    int occupied, vacant;

    srand(time(NULL)); 

    for(int floor = 0; floor < 5; floor++) {
        for(int room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2;
        }
    }

    for(int floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;
        for(int room = 0; room < 10; room++) {
            if(occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("Floor %d:\n", floor + 1);
        printf("  Occupied = %d\n", occupied);
        printf("  Vacant = %d\n\n", vacant);
    }

    return 0;
}