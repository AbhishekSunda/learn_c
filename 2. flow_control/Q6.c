// Define an enum type for the months of the year and write a program to read an integer and print the corresponding month using the enum. If the integer is not between 1 and 12, print an error message.
#include<stdio.h>
enum months{January=1,February,March,April,May,June,July,August,September,October,November,December};

int main(){
    int integer;
    printf("Enter an integer value: ");
    scanf("%d", &integer);
    
    switch (integer)
    {
    case 1:
        printf("January\n");
        break;
    case 2:
        printf("February\n");
        break;
    case 3:
        printf("March\n");
        break;
    case 4:
        printf("April\n");
        break;
    case 5:
        printf("May\n");
        break;
    case 6:
        printf("June\n");
        break;
    case 7:
        printf("July\n");
        break;
    case 8:
        printf("August\n");
        break;
    case 9:
        printf("September\n");
        break;
    case 10:
        printf("October\n");
        break;
    case 11:
        printf("November\n");
        break;
    case 12:
        printf("December\n");
        break;
    default: printf("Please enter a valid number(1-12).\n");
        break;
    }
return 0;
}