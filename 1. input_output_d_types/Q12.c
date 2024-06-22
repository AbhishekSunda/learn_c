// Write a program to read two integers and print their product, quotient (as a float), and remainder.

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d",&b);

    printf("Product of a and b is %d\n", a*b);
    printf("Quotient of a and b is %f\n", (float)a/b);
    printf("Remainder of a and b is %d\n", a%b);

return 0;
}