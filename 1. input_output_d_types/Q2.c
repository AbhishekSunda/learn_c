// Write a program to read a floating-point number from the user and print it with two decimal places.

#include<stdio.h>
int main(){
    float f;
    printf("Enter a floating point number: ");
    scanf("%f", &f);

    printf("Entered floating-point number = %.2f\n", f);
return 0;
}