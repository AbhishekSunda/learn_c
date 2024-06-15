// Write a program to read a string from the user and print it.

#include<stdio.h>
int main(){
    char string[50];
    printf("What is your name?: ");
    scanf("%[^\n]%*c", string);

    printf("My name is %s.\n", string);
return 0;
}







