// Write a program to read a character and print whether it is a vowel or consonant using a switch statement.
#include<stdio.h>
int main(){
    char c;
    printf("Enter a character\n");
    scanf("%c", &c);
    
    switch (c){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("It is a vowel.\n");
        break;
    
    default: printf("It is a consonant.\n");
        break;
    }
return 0;
}