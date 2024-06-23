// Write a program to read a double and cast it to an integer, then print both the original double and the casted integer.
#include<stdio.h>
int main(){
    double number;
    printf("Enter double floating-point number\n");
    scanf("%lf", &number);
    printf("Entered double floating-point value = %lf\n", number);
    int x = (int)number; // typecasting
    printf("Casted integer value of double = %d\n", x);
return 0;
}