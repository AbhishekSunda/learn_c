// Write a program to read an integer, cast it to a character, and print both the original integer and the resulting character.
#include<stdio.h>
int main(){
    int i;
    printf("Enter an integer value: ");
    scanf("%d", &i);
    char c = (char)i;
    printf("Entered integer value = %d\n", i);
    printf("Character of casted integer value = %c\n", c);
return 0;
}