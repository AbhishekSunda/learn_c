// Write a program to read an integer and print whether it is positive, negative, or zero using nested if-else statements.
#include<stdio.h>
int main(){
    int n;
    printf("Enter an integer number : ");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("Entered number is positive.\n");
    }
    else if(n < 0)
    {
        printf("Entered number is negative.\n");
    }
    else printf("Entered number is zero.\n");
return 0;
}