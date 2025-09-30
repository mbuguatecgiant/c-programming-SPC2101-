/* Name:Mark Mbugua 
Reg no:CT101/G/26487/25
Date:30 Sept 2025
Description: water bill calculator 

0-30 units =20 KES per units
31-60units= 25 KES per units
above 60 units=30 KES per unit
*/

#include <stdio.h>
int main(){ 
float water_units,water_bill,Total_water_bill;
 
 printf("Enter the water_units consumed \t");
 scanf("%f",&water_units);
 
 if(water_units <=30){
 water_bill = water_units * 20;
   }
   else if(water_units>=31 && water_units<=60){
   water_bill = water_units *25;
   }
   
   else{water_bill = water_units * 30;
   }
   
   Total_water_bill = water_bill;
   printf("The total water bill is KES.%.2f",Total_water_bill);
















return 0;
}