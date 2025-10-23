/*
Name:Evanson Karuri
reg:CT100/G/26206/25
description:fahrenheit to celsius conversion program
*/

#include <stdio.h>

// Function to convert Fahrenheit to Celsius
float convertToCelsius(float fahrenheit) {
    float celsius = (fahrenheit - 32) * 5.0 / 9.0;
    return celsius;
}

//user input
int main() {
    float fahrenheit;
    
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    
    //conversion
    float celsius = convertToCelsius(fahrenheit);
    printf("%.1f°F = %.1f°C\n", fahrenheit, celsius);
    
    return 0;
}