/*
Name:Evanson Karuri
reg:CT100/G/26206/25
description:volume and surface area of a cylinder
*/
#include<stdio.h>
int main(){
  //declaring variables//
  float radius, height, volume, surface_area, pi;
  
  //prompt radius//
  printf("Enter the radius: ");
  scanf("%f", &radius);
  
  //prompt height//
  printf("Enter the height: ");
  scanf("%f", &height);
  
  //computing volume//
  pi = 3.142;
  volume =pi * height * radius * radius;
  
  //computing surface area//
  surface_area =(pi * 2 * radius * radius) + (2 * pi * radius * height);
  
  //output//
  printf("\nSurface area: %.2f",surface_area);
  printf("\nVolume: %.2f",volume);
  
  return 0;
}
  
