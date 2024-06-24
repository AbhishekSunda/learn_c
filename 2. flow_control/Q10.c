// Write a program to read a character and print whether it is a vowel or consonant using a switch statement.
#include<stdio.h>
int main(){
    char c;
    printf("Enter a character\n");
    scanf("%c", &c);
    char vowel1='a';
    char vowel2='e';
    char vowel3='i';
    char vowel4='o';
    char vowel5='u';
    char VOWEL1='A';
    char VOWEL2='E';
    char VOWEL3='I';
    char VOWEL4='O';
    char VOWEL5='U';
    switch (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'){
    case 1:
        printf("It is a vowel.\n");
        break;
    
    default: printf("It is a consonant.\n");
        break;
    }
return 0;
}