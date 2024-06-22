// Write a program to read an integer and a character, and print their sum after converting the character to its integer ASCII value.
#include<stdio.h>
int main(){
    int i;
    char c;
    printf("Enter an integer value\n");
    scanf("%d", &i);
    printf("Enter a character\n");
    scanf(" %c", &c);
    printf("The ASCII value of %c is %d.\n", c, c);
    int sum = i + c;
    printf("Sum of integer and ASCII value of character = %d\n", sum);
return 0;
}