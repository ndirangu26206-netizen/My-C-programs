/*
Name:Evanson Karuri
reg:CT100/G/26206/25
description:Electric bill calculation program
*/

#include <stdio.h>

// Function to calculate electric bill
float calculateElectricBill(int units) {
    float totalBill = 0;
    
    if (units <= 100) {
        totalBill = units * 10;
    } 
    else if (units <= 200) {
        totalBill = (100 * 10) + ((units - 100) * 15);
    } 
    else {
        totalBill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    }
    
    return totalBill;
}

//user prompt
int main() {
    int units;
    
    printf("Enter units consumed: ");
    scanf("%d", &units);
    
    float bill = calculateElectricBill(units);
    printf("Total electric bill: KSh. %.2f\n", bill);
    
    return 0;
}