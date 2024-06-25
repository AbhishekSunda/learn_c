// Write a program to read an integer and print its digits in reverse order using a while loop.
#include<stdio.h>
int main(){
    int i,remainder,reverse=0;
    printf("Enter a number = ");
    scanf("%d", &i);

    while (i != 0)
    {
       remainder = i % 10;
       reverse = reverse * 10 + remainder;
       i = i / 10;
    }
    printf("Reverse of the number = %d\n", reverse);
return 0;    
}