/* Name:Mark Mbugua 
Reg no:CT101/G/26487/25
Date:23 oct 2025
Description: calculateElectricbill
*/
#include <stdio.h>

float CalculateElectricBill(int units){
float bill;

  if(units<=100){
  bill=units * 10;}
  
  else if(units <=200){
  bill=(100*10)+ ((units-100)*15);
  } 
  
  else{
  bill=(100*10)+ (100*15) + ((units-200) *20);
  }
  
  return bill;

}
int main(){
int units;
printf("Enter the number of units consumed\t");
scanf("%d",&units);

printf(" Total bill= ksh.%f",CalculateElectricBill(units));

  
 
 return 0;
 
 } 
