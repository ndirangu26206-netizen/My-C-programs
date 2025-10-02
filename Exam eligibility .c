/*
Name:Evanson Karuri
reg:CT100/G/26206/25
description:Exam legibility program
*/
#include<stdio.h>
int main (){
  int attendance , marks;
  
  //prompt//
  printf("Enter your attendance in percentage:");
  scanf("%d",&attendance);
  
  printf("\nEnter your average marks:");
  scanf("%d",&marks);
  
  //exam legibility status//
  if (attendance >=75){
    if (marks >=40){
      printf("\nEligible");
    }else{
    printf("\nNot eligible");
  }
 }else{
 printf("\nNot eligible");
 }
 return 0;
 }
      
  