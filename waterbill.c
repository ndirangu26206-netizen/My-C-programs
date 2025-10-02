/*
Name:Evanson Karuri
reg:CT100/G/26206/25
description:water billing program
*/
#include<stdio.h>
int main(){
  float unit , bill;
  
  //prompt for units used//
  printf("Enter units of water consumed:");
  scanf("%f",&unit);
  
  //calculation of water bill//
  if (unit >60){
    bill = 30 * unit ;
  } else if (unit > 30){
    bill = 25 * unit ;
}else {
bill = 20 * unit ;
}

// output //
printf("Your water bill is: Ksh %f", bill);

return 0;
}


    
  
  
  