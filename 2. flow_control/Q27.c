// Write a program to read a string and count the number of vowels and consonants using a while loop. Store the counts in an array where the first element is the number of vowels and the second element is the number of consonants.
#include<stdio.h>
int main(){
    char string[100];
    char c;
    int i=0;
    int counts[2] = {0,0}; 
    //counts[0] for vowels and counts[1] for consonants
    printf("Enter a string: ");
    scanf("%s",string);

    while (string[i] != '\0'){

        if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'||
           string[i]=='A'||string[i]=='E'||string[i]=='I'||string[i]=='O'||string[i]=='U'){
        counts[0] += 1;
        }
        else{
        counts[1] += 1;
    }
    i++;
    }
    printf("Number of vowels = %d\n", counts[0]);
    printf("Number of consonants = %d\n", counts[1]);
return 0;
}
      