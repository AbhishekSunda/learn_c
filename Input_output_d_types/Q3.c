// Write a program to read a character from the user and print its ASCII value.

#include<stdio.h>
int main(){
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    printf("the ASCII value of %c is %d\n", c, c);
return 0;
}