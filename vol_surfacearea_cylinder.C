/*
Name:Mark Mbugua
Reg No:CT101/G/26487/25
Description:C program to calculate volume and surface area of a cylinder 

*/

#include<stdio.h>

 int main () { 
 
 
 float pi,Radius,height,volume,area;
 
 printf("Enter pi:");
 scanf("%f",&pi);
 
 printf("\n Enter Radius:");
 scanf("%f",&Radius);
 
 printf("\n Enter height:");
 scanf("%f",&height);
 
 volume =pi*Radius*Radius *height ;
 
 printf("\nvolume is cm³ %.3f",volume);
 
   area = 2*pi*Radius*Radius+2*pi*Radius*height;
 
 printf("\n surface area is cm²%.3f",area);
 
 return 0;
 
 }
