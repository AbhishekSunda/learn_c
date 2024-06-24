// Write a program to read a year and print whether it is a leap year or not using an if-else statement. A year is a leap year if it is divisible by 4 but not by 100, or if it is divisible by 400.
#include<stdio.h>
int main(){
    int year;
    printf("ENTER YEAR\n");
    scanf("%d", &year);

    if(year%4!=0){
        printf("It is a common year.\n");
    }
    else if(year%100!=0){
        printf("It is a leap year.\n");
    }
    else if(year%400!=0){
        printf("It is a common year.\n");
    }
    else printf("It is a leap year.\n");
return 0;
}