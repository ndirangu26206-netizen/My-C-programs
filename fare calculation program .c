/*
Name:Evanson Karuri
reg:CT100/G/26206/25
description:Fare calculation program
*/

#include <stdio.h>

// Function to calculate fare based on distance
float calculateFare(float distance) {
    float fareRate = 50.0; // KSh. 50 per kilometer
    return distance * fareRate;
}
//user prompt
int main() {
    float distance;
    
    printf("Enter distance traveled (in kilometers): ");
    scanf("%f", &distance);
    
    //calculation
    float totalFare = calculateFare(distance);
    printf("Total fare: KSh. %.2f\n", totalFare);
    
    return 0;
}