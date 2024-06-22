// Write a program to calculate the area of a circle given its radius.

#include<stdio.h>
#include<math.h>
int main(){
    int r;
    printf("Enter radius of the circle: ");
    scanf("%d", &r);
float area=3.14*r*r;
    printf("Area of a circle = %.2f\n", area);
return 0;
}