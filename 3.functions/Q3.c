// // 3. Temperature Conversion\n
    // Write a program that defines two functions for converting temperatures between Celsius and Fahrenheit.\n
    // The function signatures are: float celsiusToFahrenheit(float celsius) and float fahrenheitToCelsius(float fahrenheit)\n
    // The program should prompt the user to enter a temperature and the desired conversion, then print the converted temperature.\n
    // Example:\n
    // Input: 100 C\n
    // Output: 212 F\n

#include<stdio.h>

float celsiusToFahrenheit(float celsius){
    // F = (9/5)C + 32.
    float Fahrenheit;
    Fahrenheit = (float)(celsius * 9 / 5) + 32;
    return Fahrenheit;
}

int main(){
    float degreeCelsius;
    printf("Enter temperature in degree Celsius : ");
    scanf("%f", &degreeCelsius);

    printf("Temperature in degree Fahrenheit = %.1f\n", celsiusToFahrenheit(degreeCelsius));
    return 0;
}