/* Name:Mark Mbugua 
Reg no:CT101/G/26487/25
Date:30 Sept 2025
Description: number guessing game 
*/
 #include <stdio.h>
 #include<stdlib.h>
 #include <time.h>
 
 int main(){
 int secret_number,guess;
 srand(time(0));
 secret_number=(rand() % 20)+1;
 
 printf("welcome to number guessing game");
 printf("\n I have a number between 1 and 20.");
  
  printf("\nEnter your guess:");
 scanf("%d",&guess);
  
  while(guess!=secret_number){
  if(guess>secret_number){
  printf("Too high!\n");}
  
   else{
   printf("Too low!\n");}
   
   printf("Enter your guess to try again:");
  scanf("%d",&guess);
  }
  
  printf("\ncongratulations!you guessed the number correctly");
  
  
  
  
 
 
 return 0;
 
 } 