// Write a program to read an integer and print whether it is even or odd using a switch statement.
#include<stdio.h>
#include<stdbool.h>

int main(){
    int i;
    printf("Enter an integer value\n");
    scanf("%d", &i);
    
    switch (i%2==0)
    {
    case true:
        printf("It is an even number.\n");
        break;
    
    default: printf("It is an odd number.\n");
        break;
    }
return 0;
}