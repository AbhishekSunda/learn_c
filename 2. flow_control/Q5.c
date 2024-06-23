// Define an enum type for the days of the week and write a program to read an integer and print the corresponding day using the enum. If the integer is not between 0 and 6, print an error message.
/*#include<stdio.h>
enum days{Sunday=0,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};
int main(){
    enum days;
    int day = Monday;
    printf("%d\n", day);
    if(day>6||day<0){
        printf("ERROR.\n");
    }
return 0;
}*/

#include<stdio.h>
enum days{Sunday=0,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};
int main(){
    int integer;
    printf("Enter an integer: ");
    scanf("%d", &integer);

    switch (integer) {   
    case 0:
     printf("Sunday \n");
        break;
    case 1:
     printf("Monday \n");
        break;
    case 2:
     printf("Tuesday \n");
        break;
    case 3:
     printf("Wednesday \n");
        break;   
    case 4:
     printf("Thursday \n");
        break; 
    case 5:
     printf("Friday \n");
        break;
    case 6:
     printf("Saturday \n");
        break;
    default : printf("Please enter a number from 0 to 6.\n");
    }   
return 0;
}