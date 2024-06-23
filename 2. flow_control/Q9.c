// Write a program to read an integer and print whether it is even or odd using a switch statement.
#include<stdio.h>
int main(){
    int i;
    printf("Enter an integer value\n");
    scanf("%d", &i);
    
    switch (i%2==0)
    {
    case 1:
        printf("It is even.\n");
        break;
    
    default: printf("It is odd.\n");
        break;
    }
return 0;
}