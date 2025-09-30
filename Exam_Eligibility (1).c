/* Name:Mark Mbugua 
Reg no:CT101/G/26487/25
Date:28 Sept 2025
Description: Exam eligibility 
*/

#include <stdio.h>
int main(){ 
float attendance,average_marks;

printf("Enter your average_marks");
scanf("%f",&average_marks);

printf("\nEnter your class attendance percentage");
scanf("%f",&attendance);

if (attendance >=75 && average_marks>=40){
printf("\n you are eligible to do exams.");}

else{printf("\n you are not eligible to do exams!");}


return 0;
}