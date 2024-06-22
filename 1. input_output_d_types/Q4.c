// Write a program to read a string from the user and print it.

#include<stdio.h>
int main(){
    char string[50];
    printf("What is your name?: ");
    scanf("%[^\n]", string);
    //scanf("%[^\n]%*c", string);format specifier used for reading string input which discard a new line character \n. String will be stored in a variable declared string.

    printf("My name is %s.\n", string);
return 0;
}







