// Write a program to read a string and print the string's length and the first and last characters of the string.

#include<stdio.h>
int main(){
    char string[100];
    int i;
    printf("Enter the string:");
    scanf("%[^\n]s", string);

    for(i=0;string[i] != '\0';i++);
    printf("Length of the string = %d\n", i);
    printf("First character of the string: %c\n", string[0]);
    printf("Last character of the string: %c\n", string[i-1]);

return 0;
}