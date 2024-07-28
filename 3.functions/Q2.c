// // 2. Calculating the Sum of Digits\n
    // Write a program that defines a function to calculate the sum of the digits of an integer.\n
    // The function signature is: int sumOfDigits(int n)\n
    // The program should read an integer from the user and use the function to compute and print the sum of its digits.\n
    // Example:\n
    // Input: 1234\n
    // Output: Sum of digits = 10\n

#include<stdio.h>

int sumOfDigits(int n){
    int sum = 0, remainder;
    if (n < 0){
        n = n * -1;
    }
    while (n != 0)
    {
        remainder = n % 10;
        n = n / 10;
        sum += remainder;
    }
    return sum;
}

int main(){
    int number;
    printf("Enter a integer number : ");
    scanf("%d", &number);

    printf("Sum of digits of %d = %d\n", number, sumOfDigits(number));
    return 0;
}
