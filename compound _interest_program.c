/*
Name:Mark Mbugua
Reg No:CT101/G/26487/25
Description:C program to calculate compound interest  

*/


#include <stdio.h>
#include <math.h>
int main() { 
int number_of_times_compounded;
float principle,rate,time, compound_interest ;

printf("\nEnter principle");
scanf("%f",&principle);

printf("\nEnter rate");
scanf("%f",&rate);

printf("\nEnter time");
scanf("%f",&time);

printf("\nEnter number_of_times_compounded ");
scanf("%d",&number_of_times_compounded);

compound_interest=principle *pow((1+ rate/number_of_times_compounded),number_of_times_compounded*time);
 
 printf("compound interest is ksh. %.2f", compound_interest);



return 0;
}
