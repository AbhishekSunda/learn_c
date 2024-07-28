// // 5. Finding Maximum of Three Numbers\n
    // Write a program that defines a function to find the maximum of three numbers.\n
    // The function signature is: int maxOfThree(int a, int b, int c)\n
    // The program should read three integers from the user and use the function to determine and print the largest number.\n
    // Example:\n
    // Input: 3, 7, 5\n
    // Output: "The maximum number is 7."\n

#include<stdio.h>

int maxOfThree(int a, int b, int c){
    if (a > b && a > c)
        return a;
    if (b > a && b > c)
        return b;
    if (c > a && c > b)
        return c;
}

int main(){
    int x, y, z;
    printf("Enter value of x : ");
    scanf("%d", &x);
    printf("Enter value of y : ");
    scanf("%d", &y);
    printf("Enter value of z : ");
    scanf("%d", &z);

    printf("Maximum between %d, %d and %d is %d\n", x, y, z, maxOfThree(x, y, z));
    return 0;
}
