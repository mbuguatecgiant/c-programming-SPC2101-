/* Name:Mark Mbugua 
Reg no:CT101/G/26487/25
Date:23 oct 2025
Description: CalculateFare
*/
#include <stdio.h>
float CalculateFare(float distance){
float Totalfare;
Totalfare= distance * 50;
return Totalfare;
}


int main (){
float kilometers;

printf("Enter the distance traveled");
scanf("%f",&kilometers);

   float TotalFare = CalculateFare(kilometers);
  printf("Totalfare is Ksh.%f", TotalFare);
 
 return 0;
 
 } 