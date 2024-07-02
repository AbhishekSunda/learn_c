// Write a program to read an integer and print its binary representation using a while loop. also read about binary representation
#include<stdio.h>
int main(){
    int n,remainder,binary=0,digit=1;
    printf("Enter an integer value: ");
    scanf("%d", &n);

    while (n != 0)
    {
        remainder = n%2;
        n = n/2;
        binary = binary + remainder*digit;
        digit = digit*10;
    }
    printf("Binary representation = %d\n", binary);
return 0;
}