/* Name:Mark Mbugua 
Reg no:CT101/G/26487/25
Date:23 oct 2025
Description: ConvertToCelcius
*/
#include <stdio.h>

float convertToCelsius(float fahrenheit) {
    float celsius = (fahrenheit - 32) * 5 / 9;
    return celsius;
}

int main() {
    float fahrenheit;
    
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    
    float celsius = convertToCelsius(fahrenheit);
    printf("%.1f°F = %.1f°C\n", fahrenheit, celsius);
    
    return 0;
}
 