/* Name:Mark Mbugua 
Reg no:CT101/G/26487/25
Date:30 Sept 2025
Description:password system 
*/
#include <stdio.h>
int main(){
int password;
do{
printf("Enter password \t");
scanf("%d",&password);

if(password !=1234){
printf("Wrong password,try again \n");}
}
 while(password !=1234);
 printf("Access granted\n");
  
 
 return 0;
 
 } 