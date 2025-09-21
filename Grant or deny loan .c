/*
Name:Mark Mbugua
Reg No:CT101/G/26487/25
Description:Prompt the user to enter the age,height,bank balance 

*/




#include <stdio.h>

int main() {
int age;
float annual_income;

    printf("Enter your age");
    scanf("%d",&age);
    
    
    
    
    printf("\nEnter annual_income");
    scanf("%f",& annual_income);
    
    
    
    
    if(age>=21&& annual_income>=21000){
    printf("\n congratulations,you qualify for a loan");
    }
    else{
    printf("\n unfortunately,we are unable to offer you a loan at this time");}
    
    
    return 0;
}
    