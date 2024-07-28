// Write a program to read integers from the user and calculate their average. The input ends when the user enters 0. Use a while loop for the input.
#include<stdio.h>
int main(){
int value,count=0,sum=0;

    while (1)
    {
        printf("Enter an integer value\n");
        scanf("%d", &value);

        if (value == 0)
            {
                break;
            }
        
            sum += value;
            count++;
    }
        printf("Sum of all integers until input is zero = %d\n", sum);
        printf("Average of the entered integers until input is zero = %f\n", (float)sum/count);
 return 0;   
 }