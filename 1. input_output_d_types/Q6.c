// Write a program to find the remainder when one integer is divided by another.

#include<stdio.h>
int main(){
    int i1,i2;
    printf("Enter value of i1: ");
    scanf("%d", &i1);
    printf("Enter value of i2: ");
    scanf("%d", &i2);

    int Remainder=i1%i2;

    printf("Remainder value = %d\n", Remainder);
return 0;
}