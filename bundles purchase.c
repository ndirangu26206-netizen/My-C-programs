/*
Name:Evanson Karuri
reg:CT100/G/26206/25
description:bundle purchase program
*/
#include <stdio.h>

int main() {
    int choice;
    
    //menu display and prompt//
    printf("Menu:\n");
    printf("1.100mb : ksh50\n");
    printf("2.500mb : ksh 200 \n");
    printf("3.1gb : ksh 350 \n");
    printf("4. 2gb : ksh 600\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);
    
    //switch statement//
    switch (choice) {
        case 1:
            printf("You chose 100mb : ksh50.\n");
            break;
        case 2:
            printf("You chose 500mb : ksh200.\n");
            break;
        case 3:
            printf("You chose 1gb : ksh350.\n");
            break;
        case 4:
            printf("You chose 2gb : ksh600.\n");
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}