// Write a program to read two floating-point numbers, cast them to integers, and then print their product as an integer.
#include<stdio.h>
int main(){
    float a,b;
    printf("Enter first floating-point number: ");
    scanf("%f", &a);
    printf("Enter second floating-point number: ");
    scanf("%f", &b);

    int x = (int)a;
    int y = (int)b;
    int product = x * y;
    printf("Product=%d\n", product);
return 0;
}