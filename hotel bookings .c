/*
Name:Evanson Karuri
reg:CT100/G/26206/25
description:hotel bookings program
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    //random number generator
    srand(time(0));

    //1D ARRAY: Weekly Revenue Tracker
    float revenue[7];
    float total = 0.0, average;

    printf("1D Array: Weekly Revenue Tracker\n");
    for (int i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];
    }

    average = total / 7.0;
    printf("\nTotal weekly revenue: %.2f\n", total);
    printf("Average daily revenue: %.2f\n\n", average);

    // 2D ARRAY: Room Occupancy (One Branch)
    int occupancy[5][10];
    int occupied, vacant;

    printf("2D Array: Room Occupancy (One Branch)\n");

    // Randomly assign 0 or 1 to each room (0 = vacant, 1 = occupied)
    for (int floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;

        for (int room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2; // 0 or 1
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("Floor %d -> Occupied: %d | Vacant: %d\n", floor + 1, occupied, vacant);
    }

    printf("\n");

    //3D ARRAY: Multiple Branches
    int chain[3][5][10];
    int totalOccupied = 0;

    printf("3D Array: Multiple Branches\n");

    // Random occupancy assignment for each branch
    for (int branch = 0; branch < 3; branch++) {
        int branchOccupied = 0;

        for (int floor = 0; floor < 5; floor++) {
            for (int room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;
                if (chain[branch][floor][room] == 1)
                    branchOccupied++;
            }
        }

        totalOccupied += branchOccupied;
        printf("Branch %d -> Occupied Rooms: %d\n", branch + 1, branchOccupied);
    }

    printf("\nTotal occupied rooms across all branches: %d\n", totalOccupied);

    return 0;
}