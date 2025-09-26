/*
Name:Evanson Karuri
reg:CT100/G/26206/25
description:loan application
*/
#include<stdio.h>
int main(){
  float age, annual_income;
  
  //prompts//
  printf("Enter your age:");
  scanf("%f", &age);
  
  printf("\nEnter your annual income:");
  scanf("%f", &annual_income);
  
  //computing//
  if(age > 20){
    if(annual_income >= 21000){
      printf("\nCongratulations you qualify for a loan");
    }else{
    printf("\nUnfortunately,we are unable to offer you a loan at this time");
  }
 }else{
 printf("\nunfortunately, we are unable to offer you a loan at this time");
 } 
 return 0;
 }