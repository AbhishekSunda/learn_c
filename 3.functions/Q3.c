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
float farhenheitToCelsius(float fahrenheit){
    // C = (5/9)F - 32.
    float Celsius;
    Celsius = (float)5 / 9 * (fahrenheit - 32);
    return Celsius;
}

int main(){
    int choice;
    printf("Enter 1 for converting Celsius into Fahrenheit.\n");
    printf("Enter 2 for converting Fahrenheit into Celsius.\n");
    printf("Choose 1 or 2 : ");
    scanf("%d", &choice);

    if (choice == 1){
        float degreeCelsius;
        printf("Enter temperature in degree Celsius : ");
        scanf("%f", &degreeCelsius);

        printf("Temperature in degree Fahrenheit = %.1f\n", celsiusToFahrenheit(degreeCelsius));
    }
    if (choice == 2)
    {
        float degreeFahrenheit;
        printf("Enter temperature in degree Fahrenheit : ");
        scanf("%f", &degreeFahrenheit);

        printf("Temperature in degree Celsius = %.1f\n", farhenheitToCelsius(degreeFahrenheit));
    }

    return 0;
}