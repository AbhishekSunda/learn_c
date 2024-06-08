// Write a program to read a floating-point number from the user and print it with two decimal places.

#include<stdio.h>
int main(){
    float f;
    printf("Enter floating-point number: ");
    scanf("%f", &f);

    printf("The value of floating-point number = %.2f\n", f);
return 0;
}