/*
Name:Mark Mbugua
Reg No:CT101/G/26487/25
Description:Prompt the user to enter the age,height,bank balance 

*/




#include <stdio.h>

int main() {
    int age;

    printf("Enter your age");
    scanf("%d",&age);
    printf("your age is%d \n",age);
    int height ;
    
    printf("Enter your height");
    scanf("%d",& height);
    printf("Your height is%d \n", height);
    
    int bankbalance;
    
    printf("Enter your bankbalance");
    scanf("%d",& bankbalance);
    printf("your bankbalance is%d",bankbalance);
    
    return 0;
}
