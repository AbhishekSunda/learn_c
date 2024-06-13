// Write a program to read a character from the user and print its ASCII value.

#include<stdio.h>
int main(){
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    printf("The ASCII value of %c is %d", c, c);
return 0;
}