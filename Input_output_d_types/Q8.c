// Write a program to read a string and an integer from the user and print them.

#include<stdio.h>
int main(){
    char string[50];
    int integer;
    printf("Enter your favColour: ");
    scanf("%s", string);
    printf("Enter your favInteger value: ");
    scanf("%d", &integer);

    printf("My favourite colour is %s.\n", string);
    printf("My favourite number is %d.\n", integer);
return 0;
}