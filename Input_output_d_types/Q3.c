// Write a program to read a character from the user and print its ASCII value.

#include<stdio.h>
int main(){
    char c;
    //asking the user to enter  a character
    printf("Enter a character: ");
    //reading a character from the user
    scanf("%c", &c);
    
    //print the ascii value of the character
    printf("the ASCII value of %c is %d\n", c, c);
return 0;
}