// // 6. Calculating Power Using a Function\n
    // Write a program that defines a function to calculate the power of a number.\n
    // The function signature is: double power(double base, int exponent)\n
    // The program should read a base and an exponent from the user and use the function to calculate and print the result.\n
    // Example:\n
    // Input: base = 2, exponent = 3\n
    // Output: "2^3 = 8"\n

#include<stdio.h>

double power(double base, int exponent){
    double result = 1;
    for (int i = 1; i <= exponent; i++)
    {
        result = result * base;
    }
    return result;
}

int main(){
    double Base;
    int Exponent;
    printf("Enter a base = ");
    scanf("%lf", &Base);
    printf("Enter an exponent = ");
    scanf("%d", &Exponent);

    printf("Base %lf to the %d exponent = %lf\n", Base, Exponent, power(Base, Exponent));
    return 0;
}